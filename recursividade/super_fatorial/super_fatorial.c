#include <stdio.h>

long int fatorial(long int n){
    if(n == 1)
        return n;
    return n * fatorial(n - 1);
}
long int num(long int n){
    if(n == 1)
        return n;
    return fatorial(n) * num(n-1);
}

int main(){
    long int n;

    printf("Digite o valor de N: ");
    scanf("%ld", &n);

    printf("%ld\n", num(n));

    return 0;
}