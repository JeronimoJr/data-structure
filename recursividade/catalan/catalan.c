#include <stdio.h>

int catalan(int n){
    if(n == 0)
        return 1;
    return 2*(2*n - 1)* catalan(n-1)/(n+1);
}
int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = catalan(n);
    printf("%d\n", result);
    return 0;
}