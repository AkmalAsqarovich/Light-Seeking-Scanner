#include <Servo.h>

int presistor = A0;
int servoPin = 8;
int dt = 30;
Servo motor;

void setup() {
  motor.attach(servoPin);
  Serial.begin(9600);
  pinMode(presistor, INPUT);
}

void loop() {
  motor.write(0);
  delay(1000); // Servo boshlang'ich nuqtaga kelishi uchun kutamiz

  int eng_katta = 0;
  int eng_katta_burchak = 0;

  // 180 gradusni skanerlash
  for(int i = 0; i <= 180; i++) {
    motor.write(i);
    delay(dt); // Servoga yetib olish uchun vaqt beramiz
    
    int hozirgi_qiymat = analogRead(presistor);
    Serial.println(hozirgi_qiymat);

    if(hozirgi_qiymat > eng_katta) {
      eng_katta = hozirgi_qiymat;
      eng_katta_burchak = i;
    }
  }

  // Eng yorug' nuqtaga qaytish
  motor.write(eng_katta_burchak);
  delay(1000);
  // Yorug'lik sezilarli darajada kamaymaguncha kutib turish
  while(abs(analogRead(presistor)-eng_katta)>80) {
    delay(100);
  }
}