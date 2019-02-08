#include <stdio.h>

int soma(int *vet, int n){
    int soma = 0;
    for(int i = 0; i < n; i++)
        soma += vet[i];
    return soma;
}

int main(void){
    int vetor[] = {2, 4, 6, 8, 10};
    int result;

    result = soma(vetor, 5);
    printf("%d\n", result);
    return 0;
}

