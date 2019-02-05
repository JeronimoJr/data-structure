#include <stdio.h>

void Swap(int *vetor, int pos1, int pos2){
    int x;
    x = vetor[pos1];
    vetor[pos1] = vetor[pos2];
    vetor[pos2] = x;
}

void BubbleSort(int *vetor, int size){
    int i;

    while(size > 1){
        i = 1;
        while(i < size){
            if(vetor[i - 1] > vetor[i])
                Swap(vetor, i-1, i);
            i++;
        }
        size--;
    }
}

void imprimir(int *vetor, int size){
    for(int i = 0; i < size; i++){
        printf("[%d] ", vetor[i]);
    }
    printf("\n\n");
}
int main(void){
    int vetor[] = {3, 2, 5, 4, 6, 1, 8, 12, 7, 14, 10, 9};

    puts("Não Ordenado");
    imprimir(vetor, 12);
    BubbleSort(vetor,12);
    puts("Ordenado");
    imprimir(vetor, 12);

    return 0;
}

