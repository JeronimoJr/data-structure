#include <stdio.h>

int fatorial(int n){
    if(n == 1)
        return n;
    else
        return n * fatorial(n-1);
};

int main(){
    int n;

    scanf("%d", &n);

    printf("Fatorial de %d = %d\n", n, fatorial(n));

    return 0;
}