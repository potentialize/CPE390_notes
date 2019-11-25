#include <iostream>
using namespace std;

extern int my_and(int a, int b);
extern int my_eor(int a, int b);
extern int my_orr(int a, int b);

int main() {
  int a = 0x8D2;
  int b = 0x68D;
  cout << hex << my_and(a, b) << '\n';
  cout << hex << my_eor(a, b) << '\n';
  cout << hex << my_orr(a, b) << '\n';
}
