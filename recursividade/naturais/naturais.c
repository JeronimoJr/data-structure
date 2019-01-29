#include <stdio.h>

int imprimir(int n){
   if(n == -1)
        return n;
    printf(" %d ", n);
    return imprimir(n-1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    imprimir(n);
    return 0;
}