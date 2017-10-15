
#define LED_1 02
#define LED_2 00
#define LED_3 04
#define LED_4 05
#define LED_5 14
#define LED_6 16 /* wakeup */
#define RGB_R 15
#define RGB_G 12
#define RGB_B 13

#define LED_ON  LOW
#define LED_OFF HIGH
#define RGB_ON  HIGH
#define RGB_OFF LOW

const byte led[5] = {LED_1,LED_2,LED_3,LED_4,LED_5};
const byte rgb[3] = {RGB_R,RGB_G,RGB_B};

void setup() {
  pinMode(LED_1,OUTPUT); digitalWrite(LED_1,LED_OFF);
  pinMode(LED_2,OUTPUT); digitalWrite(LED_2,LED_OFF);
  pinMode(LED_3,OUTPUT); digitalWrite(LED_3,LED_OFF);
  pinMode(LED_4,OUTPUT); digitalWrite(LED_4,LED_OFF);
  pinMode(LED_5,OUTPUT); digitalWrite(LED_5,LED_OFF);
  pinMode(RGB_R,OUTPUT); digitalWrite(RGB_R,RGB_OFF);
  pinMode(RGB_G,OUTPUT); digitalWrite(RGB_G,RGB_OFF);
  pinMode(RGB_B,OUTPUT); digitalWrite(RGB_B,RGB_OFF);
  Serial.begin(115200);
  delay(10);
  Serial.println("YellowDev");
  for (byte i=0;i<5;i++) {
    Serial.print(".");
    digitalWrite(led[i],LED_ON);
    delay(1000);
    digitalWrite(led[i],LED_OFF);
  }
  for (byte i=0;i<3;i++) {
    Serial.print(".");
    digitalWrite(rgb[i],RGB_ON);
    delay(1000);
    digitalWrite(rgb[i],RGB_OFF);
  }
  Serial.println();
  Serial.println("DeepSleep 20 sec");
  delay(900);
  ESP.deepSleep(20e6);
  delay(100);
}

void loop() {
  delay(100);
}
