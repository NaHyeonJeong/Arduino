byte number[10][7] = {
//{a, b, c, d, e, f, g}
  {0, 0, 0, 0, 0, 0, 1}, //0
  {1, 0, 0, 1, 1, 1, 1}, //1
  {0, 0, 1, 0, 0, 1, 0}, //2
  {0, 0, 0, 0, 1, 1, 0}, //3
  {1, 0, 0, 1, 1, 0, 0}, //4
  {0, 1, 0, 0, 1, 0, 0}, //5
  {0, 1, 0, 0, 0, 0, 0}, //6
  {0, 0, 0, 1, 1, 1, 1}, //7
  {0, 0, 0, 0, 0, 0, 0}, //8
  {0, 0, 0, 1, 1, 0, 0}  //9
};

void setup()
{
  Serial.begin(9600);
  
  for(int i = 2; i < 10; i++){
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, HIGH);
}

void loop()
{
  //기능1) 26번 line에서 측정된 전압 값 Serial 모니터에 찍기
  int val = analogRead(A0);
  Serial.println(val);
  delay(1000);
  
  //기능2) 7 segment에서 출력한 범위로 map(), 2차원 배열 사용
  int seg_val = map(val, 54, 974, 0, 9);
  print(seg_val);
  delay(1000);
}

void print(int num){ //num : 0 ~ 9
  int pin_num = 2; //a, b, ..., g
  
  for(int i = 0; i < 7; i++){
    digitalWrite(pin_num + i, number[num][i]);
  }
}
