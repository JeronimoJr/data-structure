#include <stdio.h>

int pell(int n){
    if(n == 0 || n == 1)
        return n;
    return 2*pell(n - 1) + pell(n - 2);
}

int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = pell(n);
    printf("%d\n", result);
    return 0;
}