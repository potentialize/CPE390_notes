#include <iostream>
using namespace std;

int main () {
  const int n = 100;
  uint64_t product = 1;

  for (int i = 1; i <= n; i++) {
      product = product * i; // type promotion
      cout << i << "\t" << product << "\n";
  }

  return 0;
}
