#include <stdio.h>

void func(int *vetor, int n, int *maior, int *tmaior, float *mediana){
    int aux = 0;
    int flag = 0 ;

    while(1){
        for(int i = 1; i < n; i++){
           // printf("%d > %d\n", vetor[i-1], vetor[i]);
            if(vetor[i-1] > vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[i-1];
                vetor[i-1] = aux;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
       flag = 0;
    }

    *maior = vetor[n-1];
    *tmaior = vetor[n-2];
    if(n % 2 == 0)
        *mediana = (float)(vetor[n/2] + vetor[(n/2)-1])/2;
    else
     *mediana = vetor[((n+1)/2)-1];
}
// Imprime os valores do vetor vetor
void mostrar(int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(void){
    int vetor[] = {2, 2, 3, 7, 8 ,9, 9}; // 1 2 3 5 7 8 12 15 3 5 2
    int a, b;
    float c;

    func(vetor, 7, &a, &b, &c);
    mostrar(vetor, 7);
    printf("Maior: %d\n2Maior: %d\nMediana: %.2f\n", a, b, c);
    return 0;
}

