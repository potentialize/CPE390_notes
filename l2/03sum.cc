#include <iostream>
using namespace std;

void f();

int main () {

  f();

  return 0;
}

void f() {
  // omit initialization and see what happens
  // cpp just takes the thing that was in the memory before there
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    sum += i;
  }

  cout << sum << "\n";
}
