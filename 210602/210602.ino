#include<Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(9); //핀 연결
  //0016 버전에서는 9, 10번 핀만 지원한다(이거는 아니야)
}

void loop()
{
  for(int i = 0; i < 120; i++){ //회전
    myservo.write(i); //회전각도
    delay(20); //서보모터가 회전하는 시간을 기다려야 하기 때문
  }
  myservo.write(0); //초기
  delay(1000);
}
