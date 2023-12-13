#include <stdio.h>

int factorial(int n)
{
	if(n < 0) return -1;
	if(n == 0) return 1;
	int num = n;
	while(n > 1) 
		num *= --n;
	return num;
}
int main(int argc, char* argv[])
{
	int number = 10;
	printf("Factorial of %d is - %d\n", number, factorial(number));
	return 0;
}
