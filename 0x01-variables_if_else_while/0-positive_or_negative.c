#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - a program that prints whether number is positive ,negative or
 *  Return:0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is neative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
