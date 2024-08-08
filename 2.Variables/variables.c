#include <stdio.h>

int sumfunction (int a, int b){
	return a + b;
}

int main(void){
	int number = 2;
	int number1 = 2;
	printf("The sum of %i + %i is equal to: %i\n" , number, number1, sumfunction(number, number1) );
	return 0;
}
