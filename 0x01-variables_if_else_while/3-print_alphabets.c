#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n = 97;
	int un = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (un <= 90)
	{
		putchar(un);
		un++;
	}
	putchar('\n');
	return (0);
}
