#include <iostream>
#include <vector>

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
        cout
        printf("[%d] ", vetor[i]);
    }
    printf("\n\n");
}
int main(void){
    int n, size, elem;
    vector<int> vetor;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &size);
        int vetor[size];
        for(int j = 0; j < size; j++){
            scanf("%d", &elem);
            vetor[j] = elem;
        }
    }

    puts("Não Ordenado");
    imprimir(vetor, size);
    BubbleSort(vetor,12);
    puts("Ordenado");
    imprimir(vetor, 12);

    return 0;
}