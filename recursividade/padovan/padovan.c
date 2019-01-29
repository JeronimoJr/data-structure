
#include <stdio.h>

int padovan(int n){
    if(n == 0 || n == 1 || n == 2)
        return 1;
    return padovan(n - 2) + padovan(n - 3);
}

int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = padovan(n);
    printf("%d\n", result);
    return 0;
}
