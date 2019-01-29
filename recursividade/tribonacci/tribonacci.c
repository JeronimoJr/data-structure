#include <stdio.h>

int tribonacci(int n){
    if(n == 0 || n == 1)
        return 0;
    else if(n == 2)
        return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = tribonacci(n);
    printf("%d\n", result);
    return 0;
}