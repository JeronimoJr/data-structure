#include <stdio.h>

int sum(int n){
    if(n == 1)
        return n;
    return n*n*n + sum(n-1);
}

int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = sum(n);
    printf("%d\n", result);
    return 0;
}