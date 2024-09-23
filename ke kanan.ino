const int led1 = 4;
const int led2 = 3;
const int led3 = 2;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // menyalakan led 1
  digitalWrite(led1, HIGH);
  delay(500); // tunggu selama 0.5 detik
  digitalWrite(led1, LOW); // matikan led 1
  
  // menyalakan led 2
  digitalWrite(led2, HIGH);
  delay(500); // tunggu selama 0.5 detik
  digitalWrite(led2, LOW); // matikan led 2
  
  // menyalakan led 3
  digitalWrite(led3, HIGH);
  delay(500); // tunggu selama 0.5 detik
  digitalWrite(led3, LOW); // matikan led 3
}
