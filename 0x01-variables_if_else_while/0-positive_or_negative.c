#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Generates a random number and prints whether it is positive, negative,
 *        or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
srand(time(NULL));
        int n = rand() % 201 - 100;  /* generates a random number between -100 and 100 */
        printf("%d\n", n);

        if (n > 0)
        {
                printf("is positive\n");
        }
        else if (n == 0)
        {
                printf("is zero\n");
        }
        else
        {
                printf("is negative\n");
        }
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
