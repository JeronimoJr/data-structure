#include <stdio.h>

int tetra(int n){
    if(n == 1 || n == 2 || n == 3)
        return 0;
    else if(n == 4)
        return 1;
    return tetra(n - 1) + tetra(n - 2) + tetra(n - 3) + tetra(n - 4);
}
int main(){
    int n, result;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    result = tetra(n);
    printf("%d\n", result);
    return 0;
}