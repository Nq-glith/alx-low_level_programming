#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * returned pointer should point to a newly allocated space
 * in memory which contains contains contents of s1
 * followed by contents of s2, and null terminated
 * @s1: destination string
 * @s2: source string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int g, h;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	g = h = 0;
	while (s1[g] != '\0')
		g++;
	while (s2[h] != '\0')
		h++;

	add = malloc(sizeof(char) * (g + h + 1));
	if (add == NULL)
		return (NULL);

	g = h = 0;
	while (s1[g] != '\0')
	{
		add[g] = s1[g];
		g++;
	}
	while (s2[h] != '\0')
	{
		add[g] = s2[h];
		g++, h++;
	}
	add[g] = '\0';
	return (add);
}
