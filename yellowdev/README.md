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

* GND - GND
* VCC - VCC
* TXD - TXD
* RXD - RXD
* RST - REST
* JUMPER = closed

esptool.py --chip esp8266 --port COM4 --baud 115200 read_flash 0x00000 0x400000 yellowdev-0.9.2.bin
