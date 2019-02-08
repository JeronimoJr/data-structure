#include <stdio.h>

int compara(char * a, char *b){
    char *aux;
    for(aux = a; *aux != '\0'; aux++, b++){
        if(*aux > *b)
            return 1;
        else if(*aux < &b)
            return -1;
    }
    return 0;
}

int main(void){
    char a[] = "engenharia";
    char b[] = "ciencia";

    printf("%d\n", compara(a,b));
    return 0;
}

