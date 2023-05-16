#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 * Return: int converted
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int digit = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (m == 0)
		return (0);
	return (k);
}
