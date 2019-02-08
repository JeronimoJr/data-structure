#include <stdio.h>


int main(void){
    int *p = 0x5DC; //1500
    char *c = 0x5DC; // 1500;
    printf("p: %d\n", p); //aponta para posição 1500
    p++;
    c++;
    printf("p: %d\n", p);
    printf("c: %d\n", c);
    p += 15;
    printf("p: %d\n", p);
    p -= 2;
    printf("p: %d\n", p);
    return 0;
}

