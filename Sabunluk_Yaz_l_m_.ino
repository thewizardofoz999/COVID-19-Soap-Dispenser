// Automatic Soap Dispenser with Active Detection
// Made in Turkey  by FactoremInv

//Instructables: https://www.instructables.com/member/FactoremInv
//Github: https://github.com/thewizardofoz999


#include <Servo.h>   // A modified servo that can rotate continuously is used here. Instructions are in my Instructables project.
Servo servo;

#define dwater A0
#define buzzer 4

int water = 0;


void setup() {

  Serial.begin(9600);

  servo.attach(3);
pinMode(4,OUTPUT);
}

void loop() {
  water = analogRead(dwater);

  Serial.println(water);                               
  
  if (water > 15 ) {

    Serial.print("processing");
    
    digitalWrite(buzzer,HIGH);
    delay(70);
    digitalWrite(buzzer,LOW);

    delay(1500);
    servo.write(1);
    delay(300);
    servo.write(180);
    delay(305);
    servo.write(62);

    delay(500);

    digitalWrite(buzzer,HIGH);
    delay(250);
    digitalWrite(buzzer,LOW);

    delay(25000);

    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);

    
  }

  else {
    servo.write(62);
    Serial.print("normal ");
    }

    

    

}
