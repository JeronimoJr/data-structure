#include <stdio.h>

int acherman(int m, int n){
    if(m == 0)
        return n+1;
    else if(m > 0 && n == 0)
        return acherman(m-1,1);
    else if(m > 0 && n > 0)
        return acherman(m-1, acherman(m, n-1));
     return 0;
}

int main(){
    int m, n;

    printf("Digite o valor de M e N: ");
    scanf("%d%d", &m, &n);

    printf("%d\n", acherman(m, n));
    return 0;
}