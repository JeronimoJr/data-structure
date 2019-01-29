#include <stdio.h>


void par(int n){
    if(n == -1)
        return;
    if(n % 2 == 0)
        printf(" %d ", n);
    par(n-1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    par(n);
    return 0;
}