#include <stdio.h>


void swap(void *n1, void *n2, int size){
    void *aux;
    if(size == 1){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
}


int main(void){
    int a = 10;
    char b = 'F';
    float c = 3.5;
    double d = 4.250;
    void *x, *y ;
    x = &a;
    y = &b;

    swap(&x, &y, sizeof(b));

  /*  printf("Generico: %d\n",  *(int*) x);
    printf("Inteiro: %c\n", *(char*) y);
    printf("Char: %d\n", sizeof(b));
    printf("Float: %d\n", sizeof(c));
    printf("Double: %d\n", sizeof(d));
*/
    printf("%c\n", *(char*)x);


    return 0;
}

