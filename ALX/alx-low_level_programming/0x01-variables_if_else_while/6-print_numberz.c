#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 * except q and e ,followed by a new line
 * description: 'alphabet in lower case'
 * Return: always 0
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
