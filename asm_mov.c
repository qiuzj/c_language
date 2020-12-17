#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int f( int );

int main (void) {
  int x; 
  asm volatile("movl $3,%0" : "=g"(x) : : "memory"); // x = 3;
  printf("%d  ->  %d\n", x, f(x));
}

int f( int x ) {
	asm volatile ("movl %0,%%eax;" // eax=3
                 "imull $3, %%eax;" // eax=eax*3=9
                 "addl $4,%%eax;" // eax=eax+4=13
         :
         :"a" (x)
         : "memory"
        ); // ·µ»Ø (3*x + 4);
}
