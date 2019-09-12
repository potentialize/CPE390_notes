// pick n
// N ODD => * 3 + 1
// N EVEN => / 2
// repeat until n reaches 1

#include <iostream>
using namespace std;

bool isEven (int n) {
  return n % 2 == 0;
}

collatz1(int n) {
  cout << "start: " << n << '\n';

  while (n > 1) {
    if (isEven(n)) {
      n = n / 2;
    } else {
      n = (n * 3) + 1;
    }
    cout << n << '\n';
  }
}

collatz2(int n) {
  cout << "start: " << n << '\n';

  if (n == 1) {
    return;
  }
  if (n % 2 == 0) {
    collatz2(n / 2);
  } else {
    collatz2(n * 3 + 1);
  }
}

int main() {
 collatz1(20);
 collatz2(20);
}
