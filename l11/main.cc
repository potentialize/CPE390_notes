# include <iostream>
using namespace std;

int prod(int* arr, int len) {
  int prod = *arr;
  for (int i = 1; i < len; i++) {
    arr = arr + 1;
    prod = prod * *arr;
  }
  return prod;
}

void square(int n) {
  for (int i = 0; i <= n; i++) {
    cout << (1 << i) << ' ';
  }
  cout << '\n';
}

int main () {
  int arr[] = {5, 4, 3, 2, 1};
  cout << prod(arr, 5);
  // square(5);
}
