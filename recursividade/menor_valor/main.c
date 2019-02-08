#include <stdio.h>

int maior(int *vetor, int n, int value){
    if(n < 0)
        return value;
    if(vetor[n] < value)
        value = vetor[n];
    return maior(vetor, n-1, value);
}


int main(void){
    int n, elem;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &elem);
        vetor[i] = elem;
    }

    int value = vetor[n-1];

    printf("%d\n", maior(vetor, n-2, value));
    return 0;
}
