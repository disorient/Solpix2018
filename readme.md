# SolPix solar light flasher

This is a small mod board for converting a normal, non flashing [solar light](http://pdf.lowes.com/installationguides/840623104422_install.pdf)

## Installation Steps
briefly:

1. disassemble top of case, removing clear plastic top, 4 screws, black plastic lid, rubber gasket.
2. cut D2 diode leaving as much of the wire on it's leads attached to the board.
3. solder in the mod board along its long edge, with components facing up.
4. solder a wire from the remaining pad on the mod board to a gnd connection on the original board.
5. turn on to test.
6. reassemble top of case.

## Building the firmware
The flasher uses a [WCH CH554 microcontroller](www.wch.cn/products/CH554.html) and is programmed using the [CH554 SDCC](https://github.com/Blinkinlabs/ch554_sdcc) toolchain. It should work under macOS, Linux, and Windows (but was developed under a Windows environment). Once the toolchain is set up, the firmware can be built by running 'make' in the firware directory. Pre-compiled firmware releases are also available in the releases/ directory.

A nice feature of the WCH parts is that they have a hardware USB peripheral with a built-in bootloader, so they can be programmed without needing an extra tool. Pads for the USB connections are available on one edge of the PCB.

## PCB design
![alt text](https://github.com/disorient/Solpix2018/raw/master/releases/2018-07-27%20Solpix2018%20RevA.step "PCB image")

The PCB was designed in Altium. The schematics and gerber for the release are available in the releases/ subdirectoy.
