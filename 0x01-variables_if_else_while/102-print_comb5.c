#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n1, n2, n3, n4;

		for (n1 = 0; n1 <= 9; n1++)
	{
			for (n2 = 0; n2 <= 9; n2++)
		{
				for (n3 = n1; n3 <= 9; n3++)
			{
					for (n4 = n2 + 1; n4 <= 9; n4++)
				{
						putchar((n1 % 10) + '0');
						putchar((n2 % 10) + '0');
						putchar(' ');
						putchar((n3 % 10) + '0');
						putchar((n4 % 10) + '0');
					if (!(n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

