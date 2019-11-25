const int sampleSize = 200;
int points[sampleSize] = {0};
const double delayUs = 1.0 / 10000 / sampleSize * 1000000 / 1.5;


void setup() {
  pinMode(DAC0, OUTPUT);
  analogWriteResolution(12); // full scale DAC

  for (int i = 0; i < sampleSize; i++) {
    points[i] = 2046 * sin( (float) i * 2 * PI / (double) sampleSize ) + 2046;
  }
}

void loop() {
  for (int i = 0; i < sampleSize; i++) {
    analogWrite(DAC0, points[i]);
    delayMicroseconds(delayUs);
  }
}
