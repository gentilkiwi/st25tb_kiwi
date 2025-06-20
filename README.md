# st25tb_kiwi

ST25TB / SRx NFC Emulator / Initiator - based on TI TRF7970A with MSP430

This is another **additionnal** support project of `ST25TB series NFC tags for fun in French public transports` [ST25TB_transport.pdf](https://raw.githubusercontent.com/gentilkiwi/st25tb_kiemul/main/ST25TB_transport.pdf) - it is based on [st25tb_kiemul](https://github.com/gentilkiwi/st25tb_kiemul) & [st25tb_kameleon](https://github.com/gentilkiwi/st25tb_kameleon) projects.


## Project

`st25tb_kiwi` project is ready for Texas Intruments Code Composer Studio (CCS) IDE 12+, https://www.ti.com/tool/CCSTUDIO. You can use the local IDE or the online one (CCS Cloud).

This version of the project does **not** use [`Driverlib`](https://www.ti.com/tool/MSPDRIVERLIB) and is slightly faster/optimized.


## How to use it?

Wiki: https://github.com/gentilkiwi/st25tb_kiwi/wiki


## Hardware references

- `MSP430FR2676` - https://www.ti.com/product/MSP430FR2676
- `TRF7970A` - https://www.ti.com/product/TRF7970A

## USB

This time, the USB connector is not only here to power/load the battery, but also to provide some outputs and a CLI.  
Communication settings: `115200,8,1,n`. See the Wiki for available commands.

```
  .#####.         ST25TB kiwi 0.1
 .## ^ ##.__ _    TI MSP430FR2676 & TRF7970A
 ## / \ /   ('>-  /***
 ## \ / | K  |     Benjamin DELPY `gentilkiwi` ( benjamin@gentilkiwi.com )
 '## v #\____/
  '#####' L\_      ***/


CRC Value   : r:0xbc9e c:0xbc9e - OK
Device ID   : 0x8328
Lot wafer ID: 0x22127f67 (x:31/y:47)
SYSRSTIV    : 0x0004

ST25TB kiwi mode       : special
ST25TB kiwi UART       : disabled
ST25TB Current Slot    : 0
ST25TB Total slots     : 8
ST25TB support for     : 4Kb

Welcome to the CLI!
> UART was disabled and has been temporarily re-enabled

msp # slot dump 4
Using slot #4
UID: D0023344444444FF (ST25TB512-AT)

 block#  | data        | /data
---------+-------------+---------
  0/0x00 | 00 00 00 00 | 00000000
  1/0x01 | 00 00 00 00 | 00000000
  2/0x02 | 00 00 00 00 | 00000000
  3/0x03 | 00 00 00 00 | 00000000
  4/0x04 | 00 00 00 00 | 00000000
  5/0x05 | FF FF FF FF | FFFFFFFF
  6/0x06 | FF FF FF FF | FFFFFFFF
  7/0x07 | 00 00 00 00 | 00000000
  8/0x08 | 00 00 00 00 | 00000000
  9/0x09 | 00 00 00 00 | 00000000
 10/0x0A | 00 00 00 00 | 00000000
 11/0x0B | 00 00 00 00 | 00000000
 12/0x0C | 00 00 00 00 | 00000000
 13/0x0D | 00 00 00 00 | 00000000
 14/0x0E | 00 00 00 00 | 00000000
 15/0x0F | 00 00 00 00 | 00000000
255/0xFF | FF FF FF FF | FFFFFFFF
---------+-------------+---------
Base64 data: AAAAAAAAAAAAAAAAAAAAAAAAAAD//////////wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD//////0REREQzAtA=

msp #
```

## Battery

As the board is small & light, the support for batteries is limited. You can solder a CR2032 holder for a `LIR2032` battery, but also `LP401730` or `LP402535` via a female Picoblade connector.

## Kiwi board

To practice, for POC, and for the lulz, a mini-board is also/will be available: https://oshwlab.com/gentilkiwi/st25tb_kiwi


## Authors

Benjamin DELPY 🥝 gentilkiwi, you can contact me on Twitter ( @gentilkiwi ) or by mail ( benjamin [at] gentilkiwi.com )  
Tear off part is 99% the (crazy) work of @SecLabz, see his repository https://github.com/SecLabz/near-field-chaos for more informations, and functionnalities! ❤️

This is a personal development, please respect its philosophy and don't use it for bad things!

## Licence

CC BY 4.0 licence - [https://creativecommons.org/licenses/by/4.0/](https://creativecommons.org/licenses/by/4.0/)
