#include <stdio.h>

int main() {
	int integer = 8453;
	float decimal = 875.744;
	
	printf(" integer right justified to 7 columns: %7d", integer);
	printf("\n integer right justified to 3 columns: %3d", integer);
	printf("\n decimal rounded to one digit after decimal: %.1f", decimal);
	printf("\n decimal rounded to two digits after decimal: %.2f", decimal);
	printf("\n decimal in exponential form: %e", decimal);
	
	return 0;
}

