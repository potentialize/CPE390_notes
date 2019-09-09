#include <iostream>
#include <math.h>
using namespace std;

void printDouble();
void printOdd();
void printSum();

int main() {
  printDouble();
  cout << "\n";
  printOdd();
  cout << "\n";
  printSum();
  return 0;
}

void printDouble() {
  cout << "Double every time\n";
  int prev = 1;
  for (int i = 0; i < 11; i++) {
    cout << prev << "\n";
    prev = prev * 2;
  }
}

void printOdd() {
  cout << "Odd numbers\n";
  for (int i = 1; i < 22; i = i+2) {
    cout << i << "\n";
  }
}

void printSum() {
  cout << "Sum of multiples of 3 up until 30\n";
  int sum = 0;
  for (int i = 3; i < 31; i = i+3) {
    // cout << i << "\n";
    sum = sum + i;
  }
  cout << sum << "\n";
}
