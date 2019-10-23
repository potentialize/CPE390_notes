#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}
int sub(int a, int b) {
  return a - b;
}

int main() {
  cout << add(5, 2);
  cout << "\n";
  cout << sub(5, 2);
  return 0;
}
