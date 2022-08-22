#include <stdio.h>

int main() {
    float sum;
    int i;

    sum = 0;

    for (i = 0; i < 100; i++) {
        sum += 0.1;
    }

    printf("%f\n", sum); // result is 10.000002
}