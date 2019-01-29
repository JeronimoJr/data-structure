#include <stdio.h>

int inverter(int n, int aux){
   if(n == 0)
        return aux;
    else
        return inverter(n/10, aux * 10 + n % 10);
}

int main(){
    int n, result;

    printf("Digite um valor: ");
    scanf("%d", &n);
    result = inverter(n, 0);
    printf("%d\n", result);
    return 0;
}