#define PIN_LED 7
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial);

  Serial.println("__init__");
  count = 0;
  digitalWrite(PIN_LED, 1);
}

void loop() {
  delay(1000);

  Serial.println("1s");

  for(int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 0);
    delay(100);

    
    digitalWrite(PIN_LED, 1);
    delay(100);
  }

  digitalWrite(PIN_LED, 0);

  while(1);
}
