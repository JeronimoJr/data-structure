#include <stdio.h>

int par_e_impar(int *vetor, int n){
    if(n < 0)
        return 0;
    if(vetor[n] % 2 == 0)
        return vetor[n] + par_e_impar(vetor, n-1);

    return -vetor[n] + par_e_impar(vetor, n-1);
}

int main(void){
    int vetor[] = {2, 3, 10, 5, 1, 4};

    printf("%d\n", par_e_impar(vetor, 5));
    return 0;
}

