#include <stdio.h>

int somatorio(int n){
    if(n == 1)
        return n;
    else
        return n + somatorio(n-1);
}

int main(){
    int n, result;

    printf("Digite o valor: ");
    scanf("%d", &n);
    result = somatorio(n);
    printf("%d\n", result);
    return 0;
}