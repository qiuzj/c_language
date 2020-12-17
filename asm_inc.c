#include <stdio.h>

int main (void) {
  int x = 3;
  asm volatile("incl %0" : : "m"(x));
  printf("%d", x);
}
