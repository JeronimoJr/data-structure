#include <stdio.h>

int fatorial_duplo(int n){
    if(n == 1)
        return n;
    return n * fatorial_duplo(n - 2);
}
int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = fatorial_duplo(n);
    printf("%d\n", result);
    return 0;
}