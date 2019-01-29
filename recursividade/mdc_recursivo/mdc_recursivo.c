#include <stdio.h>

int mdc(int a, int b){
    if(b != 0)
        return mdc(b, a % b);
    else
        return a;
}
int main(){
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d\n", mdc(a, b));
    return 0;
}