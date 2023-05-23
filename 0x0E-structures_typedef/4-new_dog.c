#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		myDog = malloc(sizeof(dog_t));

		if (myDog == NULL)
			return (NULL);

		myDog->name = malloc(sizeof(char) * name_l);
		if (myDog->name == NULL)
		{
			free(myDog);
			return (NULL);
		}

		myDog->owner = malloc(sizeof(char) * own_l);
		if (myDog->owner == NULL)
		{
			free(myDog->name);
			free(myDog);
			return (NULL);
		}

		myDog->name = _strcpy(myDog->name, name);
		myDog->owner = _strcpy(myDog->owner, owner);
		myDog->age = age;
	}
	return (myDog);
}

/**
 * _strlen - returns length of a string
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
