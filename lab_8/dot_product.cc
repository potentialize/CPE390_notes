#include <iostream>
using namespace std;

int main () {
  int len = 4;

  int ary1[len] = {3,4,8,2};
  int ary2[len] = {1,3,2,4};

  int dotp = 0;

  for (int i = 0; i < len; i++) {
    dotp += ary1[i] * ary2[i];
  }

  cout << "dotp: " << dotp << "\n";

  return 0;
}
