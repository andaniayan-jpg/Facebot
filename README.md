## Project Description

This is my small-scale AI smart assistant that I built completely from scratch using the ESP32-S3. I didn’t want to just make a simple breadboard project, so I designed a full custom PCB for it to make it look and feel like a proper product.

The device has a high-quality microphone with an amplifier so it can clearly pick up voice commands, and it also has a speaker so it can respond back properly. I added a TFT display to show smooth animations and expressions, so it doesn’t feel like a boring machine but more like a small gadget with some personality.

Everything is fitted inside a 3D-printed enclosure that I designed myself. I made sure the PCB, screen, mic, and speaker all fit properly and the finishing looks clean. This project combines hardware design, PCB making, wireless connectivity, and AI features into one compact device.

It’s basically my attempt at building a proper end-to-end AI gadget instead of just making a small demo.

## How to Use

1. Power the device using a USB cable.
2. Once it turns on, the TFT display will show an animation indicating that the assistant is ready.
3. Speak clearly near the microphone to give a voice command.
4. The assistant processes your request over Wi-Fi and responds back through the speaker.
5. The screen shows visual feedback while it is listening and responding.

Make sure the device is connected to Wi-Fi before using it for AI-based responses.

## Why I Made This Project

I made this project because I didn’t want to just keep learning things in theory. I wanted to actually build something real that combines electronics, coding, and AI in one proper device. Instead of copying some ready-made tutorial, I challenged myself to design everything — the PCB, the enclosure, and the full system integration.

I was also curious about how voice assistants actually work behind the scenes. We use them every day, but building one from scratch made me understand the hardware side, firmware side, and how wireless communication connects everything together.

This project was mainly about pushing myself to go beyond simple prototypes and create something that feels like an actual product.

<img width="1032" height="625" alt="image" src="https://github.com/user-attachments/assets/6c4dab83-9727-4f94-8f42-c796e8a7b2c7" />
<img width="1110" height="627" alt="image" src="https://github.com/user-attachments/assets/ee002430-9b51-444e-b60b-4823fe557476" />
<img width="781" height="909" alt="image" src="https://github.com/user-attachments/assets/4c063d9a-608c-48c6-912b-56a3127f4df0" />

<img width="919" height="344" alt="image" src="https://github.com/user-attachments/assets/e291a2e9-2dc2-4819-b97f-2a64473c53ae" />

## A full BOM.csv file is available in the repository further called as "BOM.csv"\

## Bill of Materials (BOM)

Full detailed BOM file: [BOM.csv](BOM.csv)

| Reference | Qty | Value / Part | Description | Purchase Link |
|------------|-----|--------------|--------------|---------------|
| C1, C4 | 2 | 10µF | Capacitor | https://in.element14.com/yageo/cc0805kkx7r7bb106/cap-10uf-16v-mlcc-0805/dp/3873445  |
| C2, C3 | 2 | 0.1µF | Capacitor | https://in.element14.com/multicomp-pro/mc0805b104k160ct/cap-0-1-f-16v-10-x7r-0805/dp/1759143  |
| J1 | 1 | USB_C_Receptacle_USB2.0_14P | USB Type-C Connector | https://in.element14.com/gct-global-connector-technology/usb4085-gf-a/usb-conn-2-0-type-c-r-a-rcpt-16pos/dp/2924867 |
| LS1 | 1 | Speaker | Speaker | https://in.element14.com/pui-audio/as04004pr-r/speaker-100hz-20khz-4ohm-86dba/dp/4412328  |
| MK1 | 1 | Microphone | Microphone | https://in.element14.com/multicomp-pro/abm-713-rc/electret-microphone-omni-pcb-pins/dp/2066499  |
| R1, R2 | 2 | Resistor | Resistor | https://in.element14.com/vishay/crcw060313k0fkea/res-13k-1-0-1w-0603-thick-film/dp/1652839 |
| SW1, SW2 | 3 | SW_Push | Push Button | https://in.element14.com/c-k-components/pts636-sm50-lfs/tactile-switch-0-05a-12vdc-180gf/dp/3780607  |
| U1 | 1 | ESP32-S3-WROOM-1 | Microcontroller Module | https://in.element14.com/dfrobot/dfr0975/dev-board-xtensa-lx7-wi-fi-bluetooth/dp/4733231 |
| U2 | 1 | EA_eDIPTFT32-A | TFT Display | https://robu.in/product/smartelex-3-2-tft-display-240x320/  |
| U3 | 1 | MAX9814 | Microphone Amplifier | https://in.element14.com/analog-devices/max9814etd-t/audio-amplifier-2-7v-to-5-5-tdfn/dp/2519088RL |
| U4 | 1 | MAX98357A | Audio Amplifier | https://in.element14.com/analog-devices/max98357aete-t/audio-power-amp-d-40-to-85deg/dp/2949165RL |
| U5 | 1 | AMS1117-3.3 | 3.3V Voltage Regulator | https://robu.in/product/ams1117-3-3v-1a-sot-223-voltage-regulator-ic-pack-of-5-ics/?gad_source=1&gad_campaignid=17427802703&gbraid=0AAAAADvLFWf1oom3zs2LMsp4jrXyl_zPl&gclid=EAIaIQobChMIlfeNufTqkgMVKpmmAx3wOBgwEAQYASABEgLSTPD_BwE |
