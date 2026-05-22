const int PIN_GREEN  = 2;
const int PIN_YELLOW = 3;
const int PIN_RED    = 4;

void setup() {
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_RED, LOW);
}

void loop() {
  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_RED, LOW);
  delay(5000); 
  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_YELLOW, HIGH);
  digitalWrite(PIN_RED, LOW);
  delay(2000); 
  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_RED, HIGH);
  delay(5000); 
}
