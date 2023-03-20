#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and prints whether it is positive, negative,
 *        or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
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

        return (0);
}

