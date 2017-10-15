# Yellow Dev

## SOFTAP

* Hotspot: AI-THINKER_XXXXXX
* Password: ai-thinker

http://192.168.4.1/client?command=info

{
"Version":{
"hardware":"0.1",
"software":"0.9.2"
},
"Device":{
"product":"Light",
"manufacture":"Espressif Systems"
}
}

## ESPTOOL

Connect via WittyCloud USB-Adapter. DON'T CONNECT 5V TO VCC PIN!

* GND - GND
* VCC - wire to VCC-battery
* TXD - TXD
* RXD - RXD
* RST - REST
* JUMPER = closed

esptool.py --chip esp8266 --port COM4 --baud 115200 read_flash 0x00000 0x400000 yellowdev-0.9.2.bin

## PINOUT

* TXD
* RXD
* GPIO 04 = LED 3
* GPIO 05 = LED 4
* GPIO 00 = LED 2
* GPIO 02 = LED 1
* GPIO 15 = RGB red
* GND = GND

* REST
* ADC
* CH_PD = 100 Ohm - VCC
* GPIO 16 = LED 6
* GPIO 14 = LED 5
* GPIO 12 = RGB green
* GPIO 13 = RGB blue
* VCC = 3.3V HT7333
