#include <stdio.h>
#include <stdlib.h>

int pointerInC(){
	int a, b;
	int *pa = &a, *pb = &b;
	
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	
	return 0;
}

void update(int *a, int *b){
	int aTemp = *a;
	*a += *b;
	*b = abs(*b - aTemp);
}
