/**
 * floating 상태 확인하기
 * 풀업, 풀다운 확인하기
 */
// 풀다운 : R이 버튼 뒤에 위치해야 버튼 땐 상태(버튼에서 전류 증발)에서 핀 값이 항상 0 유지 가능
// 버튼 누르면 전류가 끝까지 흐르고 핀에서 1 값 캐치 가능
// 5V -> button -> pin -> R -> GND
void setup() {
  // pinMode(13, INPUT); // digital일 경우만 사용
  Serial.begin(9600);
}

void loop() {
  // analog에서 A0~A5가 출력
  // int a = digitalRead(13);
  int a = analogRead(A0);
  Serial.println(a); // 100%로 1023이 나오지 못함...? 왜? 약간의 누수가 있는 건가
  delay(100);
}
