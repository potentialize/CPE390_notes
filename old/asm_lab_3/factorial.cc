#include <iostream>
using namespace std;

double factorial(double a) {
  if (a == 0) return 1;
  return a * factorial(a - 1);
}

int main() {
  cout << factorial(5);

  return 0;
}
