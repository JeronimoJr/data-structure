#include <stdio.h>

int fib(int n){
    if(n >= 3)
        return fib(n - 1) + fib(n - 2);
    else
        return 1;
};

int main(){
    int n, result;

    scanf("%d", &n);
    result = fib(n);
    printf("%d\n", result);
    return 0;
}