#include <iostream>
using namespace std;

extern int add(int a, int b);
extern int sub(int a, int b);

int main() {
  int sum = 0;
  for (int i = 0; i <= 10; i++) {
    sum = add(i, sum);
  }
  cout << sum << endl;
}
