#include <stdio.h>

int series(int i, int j, int k){
    if(i > j)
        return 0;
    return i + series(i+k, j, k);
}

int main(){
    int i, j, k, result;

    printf("Digite o valor de i, j, k: ");
    scanf("%d%d%d", &i, &j, &k);

    result = series(i, j, k);
    printf("%d\n", result);
    return 0;
}