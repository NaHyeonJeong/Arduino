/**
 * 조도센서
 * 피에조
 */

void setup()
{
   pinMode(13, OUTPUT);
}
void loop()
{
  int val = analogRead(A0); //조도센서 값 읽기
  int volume = map(val, 0, 1023, 33, 4978); //피에조 값 만들기

  tone(8, volume, 200);
  delay(1000);
  noTone(8);
  delay(1000);
}
