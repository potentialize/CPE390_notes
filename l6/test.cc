#include <iostream>
using namespace std;

bool isEven (int n) {
  return n % 2 == 0;
  // if (n % 2 != 0) {
  //   return false;
  // } else {
  //   return true;
  // }
}

string oddOrEven(int n) {
  return isEven(n) ? "even" : "odd";
}

int main() {
  // cout << isEven(3) << '\n';
  cout << oddOrEven(5);
}
