#include <stdio.h>

int hiperfatorial(int n, int n2){
    if(n2 == 1)
        return n;
    return  n * hiperfatorial(n, n2 - 1);
}

int hiper(int n){
    if(n == 1)
        return n;
    return hiperfatorial(n, n) * hiper(n - 1);
}

int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);   

    printf("%d\n", hiper(n)); 
    
    return 0;
}