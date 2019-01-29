#include <stdio.h>

int inverter(int *vetor, int p, int tam){
    int aux;
    if(p >= tam)
        return 0;
    else{
        aux = vetor[p];
        vetor[p] = vetor[tam];
        vetor[tam] = aux;
    }
    return inverter(vetor, p+1, tam-1);
};

void imprimir(int *vetor, int tam){
    for(int i = 1; i <= tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n, elem;

    scanf("%d", &n);
    int vetor[n];

    for(int i = 1; i <= n; i++){
        scanf("%d", &elem);
        vetor[i] = elem;
    }

    imprimir(vetor, n);
    inverter(vetor, 1, n);
    imprimir(vetor, n);

    return 0;
}