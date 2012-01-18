#define ir1 6

void setup() {
  pinMode(ir1, INPUT);
}

void loop() {
  if(digitalRead(ir1)) {
    Keyboard.write(0x20);
    while(digitalRead(ir1));
  }
}