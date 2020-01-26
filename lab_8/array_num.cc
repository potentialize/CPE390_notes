#include <iostream>
using namespace std;

int main () {
  int len = 8;
  float ary[len] = {3.1, 5.6, 6.0, 7.8, 0.2, 9.5, 4.0, 8.0};

  float min = 1000;
  float max = 0;
  float sum = 0;

  for (int i = 0; i < len; i++) {
    sum += ary[i];
    if (ary[i] < min) min = ary[i];
    if (ary[i] > max) max = ary[i];
  }

  float avg = sum / len;

  cout << "min: " << min << "\n";
  cout << "max: " << max << "\n";
  cout << "avg: " << avg << "\n";

  return 0;
}
