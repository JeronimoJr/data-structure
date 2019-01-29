#include <stdio.h>

int mul(int a, int b){
    if(b == 1)
        return a;
    return a + mul(a, b-1);
}

int main(){
    int a, b, result;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    result = mul(a,b);
    printf("%d\n", result);
    return 0;
}