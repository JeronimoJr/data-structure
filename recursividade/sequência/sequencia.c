#include <stdio.h>

int sequencia(int n){
    if(n < 3)
        return n;
    return 2*sequencia(n-1) + 3 *sequencia(n-2);
}
int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    printf("%d\n", sequencia(n));
    return 0;
}