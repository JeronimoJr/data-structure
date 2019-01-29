#include <stdio.h>

int soma_vet(int *vetor, int p, int tam){
    if(p > tam)
        return 0;
    else
        return vetor[p] + soma_vet(vetor,p+1,tam);
};
int main(){
    int n, elem, result;

    scanf("%d", &n);
    int vetor[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &elem);
        vetor[i] = elem;
    }

    result = soma_vet(vetor, 1, n);
    printf("Soma: %d\n", result);

    return 0;
}