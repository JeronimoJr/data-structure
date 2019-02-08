#include <stdio.h>

int main(void){
   // tipo_ponteiro *nome_ponteiro
   int x, *y;

   /*Ponteiros não inicializados apontam
     para um lugar indefinido. */
   int *p;

   int *q = NULL;
   x = 10;
   y = &x;

   printf("%d %d\n", x, *y);
   printf("%d %d\n", *p, q);
    return 0;
}
