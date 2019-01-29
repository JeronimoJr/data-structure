#include <stdio.h>

int potencia(int base, int expoente){
    if(expoente == 1)
        return base;
    else 
        return base * potencia(base, expoente-1);
}

int main(){
    int x, y, result;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    result = potencia(x, y);
    printf("%d\n", result);
    return 0;
}