#include <iostream>
#include <stdlib.h>
using namespace std;

extern int sum_range(int a, int b);
extern int factorial(int a);

int comp(const void *a, const void *b) {
  int *x = (int *) a;
  int *y = (int *) b;
  return *x - *y;
}

void sort_arr(int arr[], int len) {
  qsort(arr, len, sizeof(int), comp);

  for (int i = 0; i < len; i++) {
    cout << arr[i] << "\n";
  }
}

int main () {
  // cout << sum_range(3, 7) << "\n";
  // cout << factorial(4) << "\n";

  int ary[] = {2, 6, 1, 8, 5};

  sort_arr(ary, 5);

  return 0;
}
