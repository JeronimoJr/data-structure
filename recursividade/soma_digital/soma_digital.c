#include <stdio.h>

int soma_digital(int n){
    if(n == 0)
        return 0;
    return n % 10 + soma_digital(n/10);
}

int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = soma_digital(n);
    printf("%d\n", result);
    return 0;
}