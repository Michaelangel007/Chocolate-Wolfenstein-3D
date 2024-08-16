Chocolate-Wolfenstein-3D
========================

# Getting Started

1. Start MSVC 2013
2. Open solution: `win32\vs2013\choco_wold3d.sln
3. Build Solution (Ctrl-Shift-B)
4. Run (F5)

# Improvements

Improvements from Fabian's Chocolate Wolfenstein-3D:

Ready to compile and run out-of-the-box by including:
  * MSVC 2013 Solution and Project
  * SDL.dll and SDL_Mixer.dll in both Debug\ and Release\ config
  * Includes SDL and SDL_Mixer Header files

# Details

Based on Wolf4SDL by Moritz "Ripper" Kroll (http://www.chaos-software.de.vu).

Original Wolfenstein 3D by id Software (http://www.idsoftware.com)

Chocolate Wolf3D removes all the crap that was added over the years 
(snow, rain ...) in order to recreate the experience from 1993. 

All other port display the framebuffer as 320x200 without accounting for the CRT 4:3
distortion. Chocolate Wolfenstein 3D has a CRT emulator based on OpenGL:

Direct framebuffer to window (resulting in compressed image):

![alt tag](https://github.com/fabiensanglard/Chocolate-Wolfenstein-3D/blob/master/screenshots/crt_framebuffer.png)

CRT 4:3 aspect ratio emulated to match what gamer saw on their screen in 1993. Image is streched to 320x240 just
like the CRT did :

![alt tag](https://github.com/fabiensanglard/Chocolate-Wolfenstein-3D/blob/master/screenshots/crt_aspect.png)

Tested on Windows, Linux and Mac OS X

Step by Step Mac OS X setup here: http://clubctrl.com/org/prog/wolf.html

Windows Visual Studio 2013 setup here: http://richardssoftware.net/Home/Post/64

Fabien Sanglard 
