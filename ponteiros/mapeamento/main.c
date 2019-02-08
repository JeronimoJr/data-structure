#include <stdio.h>

typedef int (*T) (int);

void map(int *vetor, int size, T func){

    for(int i = 0; i < size; i++){
        vetor[i] = func(vetor[i]);
    }

}

int quadrado(int n){
    return n*n;
}

int cubo(int n){
    return n*n*n;
}

void imprimir(int *vetor, int size){
    for(int i = 0; i < 5; i++)
        printf("[%d] ", vetor[i]);
    printf("\n");
}

int main(void){
    int vetor[] = {1, 2, 3, 4, 5};

    map(vetor,5, quadrado);
    imprimir(vetor, 5);
    map(vetor, 5, cubo);
    imprimir(vetor, 5);

    return 0;
}

