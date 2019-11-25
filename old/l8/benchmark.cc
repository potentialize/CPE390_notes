#include <iostream>
using namespace std;

int main () {
  const int n = 1000;
  int a[n][n];
  int b[n][n];
  int c[n][n];

  for (int t = 0; t < 1000; t++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] = 0;
      }
    }
  }
}
