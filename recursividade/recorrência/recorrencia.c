#include <stdio.h>

int recorrencia(int m, int n){
    if((n == 1) || (m == 1))
        return m+1;
    return recorrencia(m-1, n) + recorrencia(m, n-1);
}

int main(){
    int m, n, result;

    printf("Digite o valor de M e N: ");
    scanf("%d%d", &m, &n);

    result = recorrencia(m, n);
    printf("%d\n", result);
    return 0;
}