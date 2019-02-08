#include <stdio.h>

int main(void){
    int *p, *p1, x = 10;
    float y = 20.0;

    p = &x;
    printf("*p: %d\n", *p);
    p1 = p;
    printf("*p1: %d\n", *p1);

    p = &y; // errado, tipos diferentes

    float *p3;
    p3 = &y;
    printf("*p3: %.2f\n", *p3);

    return 0;
}

