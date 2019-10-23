#include <iostream>
using namespace std;

extern int add(int a, int b);
extern int sub(int a, int b);

int main() {
  cout << "add() correct? " << (add(2, 5) == 7 ? "TRUE" : "FALSE");
  cout << "\n";
  cout << "sub() correct? " << (sub(5, 3) == 2 ? "TRUE" : "FALSE");
}
