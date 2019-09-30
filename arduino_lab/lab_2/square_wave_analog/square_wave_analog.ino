const int sampleSize = 100;
int points[sampleSize] = {0};
const float freq = 261.63;
const float adjust = 1.10;
const double delayUs = 1.0 / freq / sampleSize * 1000000 / adjust;

// f on scope higher than expected -> going too fast -> delay too small -> adjust too big

// A: 440hz, adjust 1.15
// C: 261.63hz, adjust between 1.09 and 1.10

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
