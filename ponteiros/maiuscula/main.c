#include <stdio.h>

char* maiuscula(char *str){
    char *p;
    for(p = str; *p != '\0'; p++){
        if(*p >= 'a' && *p <= 'z')
            *p = *p - 'a' + 'A';
    }
    return str;
}


int main(void){
    char x[] = "ciencia da computacao";
    puts(maiuscula(x));
    return 0;
}

