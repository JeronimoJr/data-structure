#include <stdio.h>


long int fat(long int n, long int n2){
    if(n2 == 1)
        return n;
    return n * fat(n, n2 - 1);
}

int main(){
    long int n;

    printf("Digite o valor de N: ");
    scanf("%ld", &n);

    printf("%ld\n", fat(n, n));
}