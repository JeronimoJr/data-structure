#include <stdio.h>

int max_value(int *vetor, int p, int n, int *vet){
   if(p > n)
        return menor;
    if(menor > vetor[p])
        menor = vetor[p];
    return max_value(vetor, p+1, n);
}

int main(){
    int n, elem, result;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];

    for(int i = 1; i <= n; i++){
        scanf("%d", &elem);
        vetor[i] = elem;
    }

    result = max_value(vetor, 2, n, vetor[1]);
    printf("%d\n", result);
    return 0;
}