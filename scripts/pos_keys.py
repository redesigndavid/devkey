import pcbnew
import re
import math

b = pcbnew.GetBoard()

xoffset = -63.75
yoffset = -63.1
for module in b.GetModules():

    name = module.GetReference()
    try:
        digits = int(re.findall('\d+', name)[0]) - 1
        letters = re.findall('[a-zA-Z]+', name)[0]
    except:
        continue

    y = (digits % 5) * 19.495
    x = (digits / 5) * 19.495

    yoffsets = {
        0: -0.81599,
        1: 0,
        2: 2.9201,
        3: 4.7625,
        4: 2.9201,
        5: 0,
        6: -0.81599,
    }
    y -= yoffsets.get(digits/5, 0)

    if (digits % 5) == 4:
        rotate = {
            0: 3.1614*60,
            1: 3.1614*20,
            2: 3.1614*00,
            3: 3.1614*-20,
            4: 3.1614*-60,
            5: 3.1614*60,
            6: 0,
        }
        y += 4
        rotation = rotate.get(digits/5)
        module.SetOrientation(0)
    else:
        rotation = 0
        module.SetOrientation(0)

    if letters in ('SF', 'DD'):
        module.SetPosition(pcbnew.wxPointMM(
            x - xoffset,
            y - yoffset))
        print letters, x, y

    if letters in ('DB'):
        module.SetPosition(pcbnew.wxPointMM(
            x - xoffset - 1,
            y - yoffset + 4))
        print letters, x, y

    if letters in ('-DB', '-DD'):
        module.SetOrientation(1800)
        module.SetPosition(pcbnew.wxPointMM(
            0 - 200 - xoffset,
            0 - 200 - yoffset))

    if letters == 'D':
       module.SetPosition(pcbnew.wxPointMM(x - xoffset, y - yoffset))

S15 = b.FindModuleByReference('SF20')
S11 = b.FindModuleByReference('SF16')
val = (S15.GetPosition()[1] - S11.GetPosition()[1]) * 1.4


for idx, modname in enumerate(('SF35', 'SF30', 'SF25', 'SF20', 'SF15', 'SF10', 'SF5')):
    idx += 1
    rotation = math.radians(90 - ((-4 + idx)  * 10.5))
    y = S15.GetPosition()[1] - (math.sin(rotation) * val) + val
    x = S15.GetPosition()[0] - (math.cos(rotation) * val)



    module = b.FindModuleByReference(modname)
    if module:
        module.SetPosition(pcbnew.wxPoint(x, y))
        module.SetOrientation(3.1614 * 2 * (-4 + idx) * 14)
        print 'found', modname
    else:
        print 'nofound', modname
        continue
    module = b.FindModuleByReference(modname.replace('SF', 'D'))
    if module:
        module.SetPosition(pcbnew.wxPoint(x, y))
        module.SetOrientation(3.1614 * 2 * (-4 + idx) * 14)
        print 'found', modname
    else:
        print 'nofound', modname
        continue

    module = b.FindModuleByReference(modname.replace('SF', 'DB'))
    if module:
        print 'found', modname.replace('SF', 'DB')
        module.SetPosition(pcbnew.wxPoint(x, y + 100))
    else:
        print modname.replace('SF', 'DB'), 'not found'

    module = b.FindModuleByReference(modname.replace('SF', 'DB'))
    if module:
        print 'found', modname.replace('SF', 'DB')
        module.SetPosition(pcbnew.wxPoint(x - 1, y + 4))

    origmodule = b.FindModuleByReference(modname)
    module = b.FindModuleByReference(modname.replace('SF', 'DD'))
    if module:
        print
        module.SetPosition(pcbnew.wxPoint(x, y))
        module.SetOrientation(3.1614 * 2 * (-4 + idx) * 14)
    else:
        print modname.replace('SF', 'DD')

    origmodule = b.FindModuleByReference(modname)
    module = b.FindModuleByReference(modname.replace('SF', 'D'))
    xoff = [0, 8, 3, 0, 5, 8, 0]
    y = origmodule.GetPosition()[1] - (10 * 1000000)
    x = origmodule.GetPosition()[0] -  (xoff[idx] * 1000000)
    #module.SetPosition(pcbnew.wxPoint(x, y))
    #module.SetOrientation(3.1614 * 2 * (-4 + idx) * 14)
#
#module = b.FindModuleByReference('teensy->hdmi->out1')
#module.SetPosition(pcbnew.wxPoint(63.75 * 1000000, 46.3 * 1000000))
#module.SetOrientation(2700)
#module = b.FindModuleByReference('out->hdmi->switches1')
#module.SetPosition(pcbnew.wxPoint(180.72 * 1000000, 46.3 * 1000000))
#module.SetOrientation(900)
#module = b.FindModuleByReference('U1')
#module.SetPosition(pcbnew.wxPoint(122.235 * 1000000, 37.8 * 1000000))
"""
for module in b.GetModules():
    name = module.GetReference()
    try:
        digits = int(re.findall('\d+', name)[0]) - 1
        letters = re.findall('[a-zA-Z]+', name)[0]
    except:
        continue
    if letters in ('SF', 'D' ):
        module.SetOrientation(1800)
        module.SetPosition(pcbnew.wxPointMM(
            0 - 200 - xoffset,
            0 - 200 - yoffset))
            """
