#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, assigns a random number to variable n and prints
 *        whether the number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n == 0)
	{
		printf("zero\n");
	}
	else if (n > 0)
	{
		printf("positive\n");
	}
	else
	{
		printf("negative\n");
	}

	return (0);
}

