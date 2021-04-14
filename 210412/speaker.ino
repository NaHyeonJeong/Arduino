/**
 * 피에조 스피커 사용해서 도레미파솔라시도 한 번만 듣기
 */
int frequency[] = {262, 294, 330, 349, 392, 440, 494, 523};

void setup()
{
  pinMode(8, OUTPUT);
}

/*
i가 전역변수로 선언되면
while문 다 돌고 나면 i는 8이 됨
그리고 그 상태 고정이라
다시 while문을 타지 못함
*/
int i = 0;

void loop()
{
  while(i < 8){
    tone(8, frequency[i], 250);
    delay(400);
    noTone(8);
    i++;
  }
}
