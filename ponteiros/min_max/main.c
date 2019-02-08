#include <stdio.h>

void min_max(int vetor[], int n, int *min, int *max){
    *min = *max = vetor[0];
    for(int i = 1; i < n; i++){
        if(vetor[i] < *min)
            *min = vetor[i];
        else if(vetor[i] > *max)
                *max = vetor[i];
    }
}


int main(void){
    int vetor[] = {3, 8, 12, 5, 7, 9, 11};
    int min, max;

    min_max(vetor, 7, &min, &max);
    printf("Min: %d\nMax: %d\n", min,max);
    return 0;
}

