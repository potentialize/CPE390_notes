/*
  author: Bruno Roemers
  I pledge my honor that I have abided by the Stevens Honor System.

  n:                10^7
  #trials:          200
  compile:          g++ hw2.cc -o hw2
  t on laptop:      4.430s, 4.377s, 4.622s, 4.363s, 4.348s
        avg:        4.428s
        max clock:  2.8 GHz (cat /proc/meminfo)
        mem speed:  2.4 MHz (lshw => clock of system memory)
  t on raspi 4:     23.544s, 23.587s
        avg:        23.566s
        max clock:  1.5 GHz
        mem speed:  3.2 MHz (https://www.raspberrypi.org/documentation/configuration/config-txt/overclocking.md)

  Interesting that the raspi 4 has a higher memory frequency than my laptop.
  The laptop is +- 5x faster. I have no idea how to explain this with the clock speeds. (# cores should not matter)
  Maybe the pointer logic or the pipeline is less efficient on the pi.
*/

#include <iostream>
#include <cmath>
using namespace std;

// stack - segmentation fault on laptop (10mb too big)
void stack() {
  int n = pow(10, 7); // 10 000 000 = 10^7
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i] = 0;
  }
}

// heap
void heap() {
  int n = pow(10, 7); // 10 000 000 = 10^7

  char* ptr_arr = (char*) malloc(n * sizeof(char)); // reserve 10 000 000 bytes = 10mb

  for (char* ptr_i = ptr_arr; ptr_i < ptr_arr + n; ptr_i++) {
    *ptr_i = 0;
  }

  free(ptr_arr);
}


int main() {
  for (int i = 0; i < 200; i++) {
    // stack(); // runs out of memory on my laptop
    heap();
  }

  return 0;
}
