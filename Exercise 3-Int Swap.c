#include <stdio.h>

int main() {
	int int1, int2, int3;
	
	scanf("%d", &int1);
	scanf("%d", &int2);
	
	int3 = int1;
	int1 = int2;
	int2 = int3;
	
	printf("%d", int1);
	printf(" %d", int2);

	
	
	return 0;
}

