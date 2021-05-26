/**
 * 7 segment
 * button
 */
 
byte digits[10][7] = {
  //{A, B, C, D, E, F, G}
  {0, 0, 0, 0, 0, 0, 1}, //0
  {1, 0, 0, 1, 1, 1, 1}, //1
  {0, 0, 1, 0, 0, 1, 0}, //2
  {0, 0, 0, 0, 1, 1, 0}, //3
  {1, 0, 0, 1, 1, 0, 0}, //4
  {0, 1, 0, 0, 1, 0, 0}, //5
  {0, 1, 0, 0, 0, 0, 0}, //6
  {0, 0, 0, 1, 1, 1, 1}, //7
  {0, 0, 0, 0, 0, 0, 0}, //8
  {0, 0, 0, 1, 1, 0, 0} //9
};

int digit = 0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  
  for(int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, HIGH);
  
}

void loop()
{
  if(digitalRead(13) == HIGH){ //값 줄이기
    digit--;
    if(digit < 0) { //0보다 작아지면 다시 가장 큰 값으로
      digit = 9;
    }
  }
  if(digitalRead(12) == HIGH){ //값 늘리기
    digit++;
    if(digit > 9) {
      digit = 0;
    }
  }
  
  display(digit);
  delay(1000);
}

void display(int num){
  int pin = 2;

  for(int i = 0; i < 7; i++){
    digitalWrite(pin + i, digits[num][i]);
  }
}
