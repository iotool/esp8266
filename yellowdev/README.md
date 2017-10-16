# Yellow Dev

* 1.39 mA deep sleep with blue power led (470 Ohm resistor) = 72 days @ 2.400 mAh
* 0.31 mA deep sleep with blue power led (10 kOhm resistor / replaced) = 322 days @ 2.400 mAh
* 0.26 mA deep sleep without blue power led (cut pcb close to the jumper) = 384 days @ 2.400 mAh

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
* GPIO 00 = GPIO 00 (V1)
* JUMPER = closed (V2)

esptool.py --chip esp8266 --port COM4 --baud 115200 read_flash 0x00000 0x400000 yellowdev-0.9.2.bin

## PINOUT

* TXD
* RXD
* GPIO 04 = LED 3 (glow durring deep sleep)
* GPIO 05 = LED 4 (glow durring deep sleep)
* GPIO 00 = LED 2 (glow durring deep sleep)
* GPIO 02 = LED 1
* GPIO 15 = RGB red
* GND = GND

* REST
* ADC
* CH_PD = 100 Ohm - VCC
* GPIO 16 = (LED 6) = WAKEUP = WIRE TO REST
* GPIO 14 = LED 5
* GPIO 12 = RGB green (glow durring deep sleep)
* GPIO 13 = RGB blue
* VCC = 3.3V HT7333
