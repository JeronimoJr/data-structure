#include <stdio.h>

int SubValor(int n1, int n2){
    int cont = 0;
    if(n2 == 0)
        return 0;
    if(n1 == n2 % 10)
        cont++;
    return cont + rep(n1, n2/10); 
}

int main(){
    int n1, n2, result;

    printf("Digite o valor inicial: ");
    scanf("%d", &n1);
    printf("Digite o valor a ser verificado: ");
    scanf("%d", &n2);

    result = SubValor(n1, n2);
    printf("%d\n", result);
    return 0;
}