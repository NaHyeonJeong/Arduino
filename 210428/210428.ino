/**
 * 조도센서
 * led
 */
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //조도센서 값을 읽음
  int val = analogRead(A0);
  Serial.println(val);
  delay(1000);
  
  //빛 밝으면 led 어두워짐, 빛 어두우면 led 밝아짐
  //조도센서 값 범위는 0 - 1023
  //led 값은 센싱 값이 0 이면 255, 1023 이면 0 이어야 함
  int ledVal = map(val, 0, 1023, 255, 0);
  analogWrite(9, ledVal);
}
