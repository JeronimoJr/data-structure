#include <stdio.h>

void InsertionSort(int *vetor, int size){
    int aux, i, j;
    for(i = 1; i < size; i++){
        aux = vetor[i]; // 1 i = 3
        for(j = i; (j > 0) && (aux < vetor[j - 1]); j--){ // j = 1
            vetor[j] = vetor[j-1];
            // 3 5 2 1 --- 3 5 5 1 -- 2 3 5 1 -- 2 3 5 5 -- 2 3 3 5 -- 2 2 3 5 -- 1 2 3 5
        }
        vetor[j] = aux;
        imprimir(vetor,6);
    }
}

// 3 5 2 1
void imprimir(int *vetor, int size){
    for(int i = 0; i < size; i++)
        printf("[%d] ", vetor[i]);
    printf("\n");
}
int main(void){
    int vetor[] = {3, 5, 2, 1, 4, 0};

    //imprimir(vetor,6);
    InsertionSort(vetor, 6);
    //imprimir(vetor,6);
    return 0;
}

