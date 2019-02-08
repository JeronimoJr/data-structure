#include <stdio.h>

int func(int vet1[], int vec2[], int one, int two){
    int cont = 0;
    int k = 0;

    while(two > 0){
        for(int i = 0; i < one; i++){
            printf("[%d] ? [%d]     %d %d\n", vec2[k], vet1[i], k,  i);
            if(vec2[k] == vet1[i]){
                cont++;
                break;
            }
        }
        k++;
        two--;
    }
    return cont;
}


int main(void){
    int vet1[] = {3, 5, 7, 9, 2, 0};
    int vet2[] = {2, 2, 2, 2, 2};

    printf("%d\n", func(vet1, vet2, 5, 6));

    return 0;
}

