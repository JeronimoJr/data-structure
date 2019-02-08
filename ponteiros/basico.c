#include <stdio.h>

int main(int argc, char **argv){
	int x = 23;
	int *p = &x; // Atribui a p o endereço de x (p aponta para x)
	*p = 67; // Acessa o valor da variável apontada pelo ponteiro
	
	printf("%d %d\n", x, *p); // 67
	
	// Nem todo ponteiro em C possui um tipo base
	void *pt = (void*) &x;
	
	return 0;
}

