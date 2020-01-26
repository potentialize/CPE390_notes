#include <iostream>
using namespace std;

void f();

int main() {
  int sum = 0;
  for (int i = 0; i < 100; i++) {
    sum += i;
  }
  cout << sum << "\n";

  for (int i = 0; i < 100; i++) {
    f();
  }
}
