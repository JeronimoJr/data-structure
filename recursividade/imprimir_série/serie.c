#include <stdio.h>

void series(int i, int j, int k){
    if(i > j)
        return -1;
    printf("%d", series(i+k, j, k));
   return series(i+k, j, k);
}
int main(){
    int i, j, k;

    printf("Digite o valor de i, j, k: ");
    scanf("%d%d%d", &i, &j, &k);

    series(i, j, k);
    
    return 0;
}