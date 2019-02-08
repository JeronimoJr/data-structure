#include <stdio.h>

int main(int argc, char **argv){
	int vet[] = {1, 9, 2, 7, 3};
	int *p = &vet[0];
	
	// Um vetor é um ponteiro que aponta para uma sequência
	// de valores de mesmo tipo (o tipo base)
	for(int i = 0; i < 5; i++)
		printf("%d ", p[i]);
		
// ------------------------------------------------------------
	// w é um ponteiro de tipo base float
	float w[3] = {3.0, 8.0, 2.0};
	
	printf("%.2f %.2f %.2f", w[0], w[1], w[2]);
	
	return 0;
}

