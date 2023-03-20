#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char lowercase = 'a';
	char uppercase = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}

