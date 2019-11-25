void blink();

// Pin 13: 3.3V = HIGH
// Resistor: 220 Ohms
// Current: 3.3V / 220 Ohms = 15 mA

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  // blink(12, 500);
  // digitalWrite(13, HIGH);

  morse(12, 13, "...---...");
}

void loop() {
  // blink(12, 1000);
}

void blink(int port, int delay_ms) {
  // blink light
  digitalWrite(port, HIGH);
  delay(delay_ms / 2);
  digitalWrite(port, LOW);
  delay(delay_ms / 2);
}

void morse(int port, int port_error, char code[]) {
  for (int i = 0; i < strlen(code); i++) {
    int char_long_ms = 1000; // time that char is HIGH/LOW
    int char_short_ms = 500;
    int pause_ms = 500; // time between reading chars
    
    // - => high
    // . => low
    // anything else turns on error port
    if (code[i] == '-') {
      // morse high
      digitalWrite(port, HIGH);
      delay(char_long_ms);
    } else if (code[i] == '.') {
      // morse low
      digitalWrite(port, HIGH);
      delay(char_short_ms);
    } else {
      // morse char not recognised
      digitalWrite(port_error, HIGH);
    }

    // turn port of between chars
    digitalWrite(port, LOW);
    delay(pause_ms);
  }
}
