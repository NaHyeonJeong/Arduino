/**
 * 버튼 2개가 모두 눌렸을 때 LED 켜지게
 */
void setup()
{
  pinMode(13, OUTPUT);
  // 전류 1, 0 판단 위해 INPUT - digitalRead()
  pinMode(8, INPUT);
  pinMode(7, INPUT);
}

void loop()
{
  int val8 = digitalRead(8);
  int val7 = digitalRead(7);
  
  if(val8 == HIGH && val7 == HIGH){
    digitalWrite(13, HIGH); 
  } else {
    digitalWrite(13, LOW);  
  }
  
}
