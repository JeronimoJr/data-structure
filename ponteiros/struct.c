#include <stdio.h>

typedef struct{
	int *x;
	int *y;
}res;

int main(int argc, char **argv){
	int x = 10, y = 8;
	res u = (&x, &y);
	
	//*u.x = &x;
	//*u.y = &y;
	printf("%d %d\n", x, y);	
	return 0;
}

