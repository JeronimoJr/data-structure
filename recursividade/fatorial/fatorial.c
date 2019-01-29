#include <stdio.h>

int fatorial(int n){
    if(n <= 1)
        return 1;
    return n * fatorial(n - 1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("%d\n", fatorial(n));
    return 0;
}