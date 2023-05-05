#include "main.h"

/**
 * *infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store function
 * @size_r: buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, box = 0, a, b, sum, h;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		h = len1;
	else
		h = len2;
	if ((h + 1) >= size_r)
		return (0);
	r[h + 1] = '\0';

	while (h >= 0)
	{
		a = (n1[len1 - 1] - '0');
		b = (n1[len2 - 1] - '0');
		if (len1 > 0 && len2 > 0)
			sum = a + b + box;
		else if (len1 < 0 && len2 > 0)
			sum = b + box;
		else if (len1 > 0 && len2 < 0)
			sum = a + box;
		else
			sum = box;
		if (sum > 9)
		{
			box = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			box = 0;
			sum = sum + '0';
		}
		r[h] = sum;
		len1--;
		len2--;
		h--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}	
