devkey joystick 
======================
A friend of mine wanted a keyboard with a [hori hayabusa joystick](https://www.focusattack.com/hori-hayabusa-joystick/).  I made it happen.

I had to add an extra row to for the 4 keys connected to the joystick.


build instructions
------------------
Refer to build [tmk_core/doc/build.md](../../tmk_core/doc/build.md) for build
instructions.

![joystick hdmi devkey](../../../images/joystick.jpg)


keyboard layers
---------------

#### default layer
    .---------------------------.                .---------------------------.        
    |  `|  1|  2|  3|  4|  5| PU|                |  =|  6|  7|  8|  9|  0|  -|
    |---------------------------|                |---------------------------|
    |TAB|  Q|  W|  E|  R|  T| PD|       UP       |CAP|  Y|  U|  I|  O|  P|ESC|
    |---------------------------|     LT  RT     |---------------------------|
    |LCL|  A|  S|  D|FN3|  G|FN0|       DN       |ENT|  H|  J|  K|  L|  :|  '|
    |---------------------------|                |---------------------------|
    |LST|  Z|  X|  C|  V|  B|ESC|                |BSP|  N|  M|  ,|  .|  /|RST|
    `---------------------------'                `---------------------------'
                |LAT|WIN|FN0|                        |SPC|ENT|FN1|            
                `-----------'                        `-----------'            

#### symbols and functions layer 
When FN0 is tapped, it produced the 'space' key.  When it is pressed and held,
it turns on the function layer.

    .---------------------------.                .---------------------------.        
    |   | F1| F2| F3| F4| F5|ESC|                |F12| F6| F7| F8| F9|F10|F11|
    |---------------------------|                |---------------------------|
    |   |   |   |   |   |   |   |                |   |  ~|  /|  \|  {|  }|   |
    |---------------------------|                |---------------------------|
    |   |   |   |   |   |   |   |                |   |  `|  (|  )|  [|  ]|   |
    |---------------------------|                |---------------------------|
    |   |   |   |   |   |   |   |                |   |  -|  +|  =|  ||  /|   |
    `---------------------------'                `---------------------------'
                |   |   |   |                        | BS|ESC|   |            
                `-----------'                        `-----------'            

#### mouse layer
When FN1 is tapped, it toggles the mouse layer on and off.


    .---------------------------.                .---------------------------.        
    |   |   |   |   |   |   |   |                |   |   |   |   |   |   |   |
    |---------------------------|                |---------------------------|
    |   |   |   |   |   |   |   |      MUP       |   |   |   |   |   |   |   |
    |---------------------------|    MLT  MRT    |---------------------------|
    |   |   |   |   |   |   |   |      MDN       |   |   |   |   |   |   |   |
    |---------------------------|                |---------------------------|
    |   |   |   |   |   |   |   |                | M3|   |   |   |   |   |   |
    `---------------------------'                `---------------------------'
                |   |   |   |                        | M1| M2|   |            
                `-----------'                        `-----------'            

