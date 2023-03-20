/*
 * This program prints the alphabet in lowercase, followed by a new line.
 * It skips the letters 'e' and 'q'.
 */

#include <stdio.h>

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');
return (0);
}

