/**
 * floating 상태 확인하기
 * 풀업, 풀다운 확인하기
 */
// 풀업 : R이 버튼 앞에 위치해야 전압 강하로 인해 버튼 땐 상태에서 핀 값이 항상 1 유지 가능
// 버튼을 누르면 전류가 끝까지 흐르기 때문에 이미 R을 만나서 전압 강하로 인해 핀에 오는 값은 0
// 5V -> R -> pin -> button -> GND
void setup() {
  pinMode(13, INPUT); // digital일 경우만 사용
  Serial.begin(9600);
}

void loop() {
  // analog에서 A0~A5가 출력
  int a = digitalRead(13);
  // int a = analogRead(A0);
  Serial.println(a);
  delay(100);
}
