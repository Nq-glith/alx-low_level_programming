#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments
 * of the program
 * @ac: int type
 * @av: Char type pointer
 * Return: pointer to a new string else NULL if it fails
 * NULL f ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			i += 1;
		}
		i += 1;
	}
	i += 1;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			ptr[l] = av[j][k];
			l++;
		}
		ptr[l] = '\n';
		l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
