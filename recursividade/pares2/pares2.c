#include <stdio.h>

void imprimir(int n, int aux){
    if(aux > n)
        return;
    if(aux % 2 == 0)
        printf("%d ", aux);
    imprimir(n, aux+1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    imprimir(n, 0);
    return 0;
}