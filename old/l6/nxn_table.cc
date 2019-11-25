#include <iostream>
using namespace std;

int main() {
  int n = 5;

  for (int y = 1; y <= n; y++) {
    for (int x = 1; x <= n; x++) {
      cout << x * y << '\t';
    }
    cout << '\n';
  }
}
