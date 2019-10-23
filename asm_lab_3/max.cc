#include <iostream>
using namespace std;

int max(int arr[], int size) {
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int main() {
  int arr[5] = {2, 5, 7, 9, 1};
  cout << max(arr, 5);

  return 0;
}
