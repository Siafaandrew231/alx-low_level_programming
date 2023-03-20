#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
{
	int next_num = num + 1;

	while (next_num <= 57)
{
	putchar(num);
	putchar(next_num);

	if (num != 56 || next_num != 57)
{
	putchar(',');
	putchar(' ');
}
	next_num++;
}
	num++;
}
	putchar('\n');

	return (0);
}

