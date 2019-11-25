#include <iostream>
#include <math.h>
using namespace std;

void onetoten();
void powers();

int main() {
  onetoten();
  return 0;
}

void onetoten() {
  for (int i = 0; i < 10; i++) {
    // print to stdout
    // std::cout
    cout << i + 1 << " ";
    cout << "\n";
  }
}

void powers() {
  for (int i = 0; i < 11; i++) {
    // print to stdout
    // std::cout
    cout << pow(2, i) << " ";
    cout << "\n";
  }
}
