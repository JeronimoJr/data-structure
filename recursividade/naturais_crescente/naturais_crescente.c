#include <stdio.h>

int imprimir(int n, int b){
   if(b == n+1)
        return b;
    printf(" %d ", b);
    return imprimir(n, b+1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    imprimir(n, 1);
    return 0;
}