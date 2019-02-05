#include <stdio.h>

int particiona(int *vetor, int inicio, int fim){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = vetor[inicio];
    while(esq < dir){
        while(vetor[esq] <= pivo)
            esq++;
        while(vetor[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void QuickSort(int *vetor, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim);
        QuickSort(vetor, inicio, pivo-1);
        QuickSort(vetor, pivo+1, fim);
    }
}

void imprimir(int *vetor, int size){
    for(int i = 0; i < size; i++)
        printf("[%d] ", vetor[i]);
    printf("\n");
}

int main(void){
    int vetor[] = {3, 5, 1, 2, 8, 9, 0};

    QuickSort(vetor,0,6);
    imprimir(vetor, 7);
    return 0;
}

