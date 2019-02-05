#include <stdio.h>

void Swap(int *vetor, int pos1, int pos2){
    int x;
    x = vetor[pos1];
    vetor[pos1] = vetor[pos2];
    vetor[pos2] = x;
}

void SelectionSort(int *vetor, int size){
    int pivo;
    for(int i = 0; i < size; i++){
        pivo = i;
        for(int j = i+1; j < size; j++){
            if(vetor[pivo] > vetor[j]){
                pivo = j;
            }
        }
        Swap(vetor, i, pivo);
    }
}
void imprimir(int *vetor, int size){
    for(int i = 0; i < size; i++){
        printf("[%d] ", vetor[i]);
    }
    printf("\n");
}

int main(void){
    int vetor[] = {3, 5, 2, 7, 1, 8,4};

    SelectionSort(vetor, 7);
    imprimir(vetor, 7);
    printf("Hello World!\n");
    return 0;
}

