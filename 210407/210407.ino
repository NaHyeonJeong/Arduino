/**
   버튼을 누르면 3색 LED 색 중 하나가 점점 밝아지다가(+1)
   MAX가 되면 불 꺼짐(0)
   이걸 반복
*/
int r = 0; // loop 돌 때마다 0이 되는걸 방지하기 위해 전역변수로 선언함

void setup()
{
  pinMode(8, INPUT);
}

void loop()
{
  if (digitalRead(8) == HIGH) {
    r += 10;
    if (r > 255) { // 불 꺼지는 조건(end 조건)
      r = 0;
    }
    analogWrite(11, r);
    delay(500);
  } else {
    analogWrite(11, 0);
    r = 0;
  }
}
