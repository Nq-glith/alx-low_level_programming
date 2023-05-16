#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates/combines two strings
 * appending the src string to the dest string
 * overwriting the terminating null byte at
 * the end of dest and then adding it to src
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	/*initialize pointer a, a will point to start of dest string*/
	char *a = dest;

	/*this loop will through a until it reaches the end of the dest string*/
	while (*a != '\0')
	{
		a++;
	}
	/*once the loop reaches the end of the dest string*/
	/*this loop will repeat through the source string*/
	/*and append each charecter to the end of dest*/
	while (*src != '\0')
	{
		*a = *src;
		a++;
		src++;
	}
	/*add a new terminating null byte to the end of the combined string*/
	/*return pointer to the resulting string*/
	*a = '\0';
	return (dest);
}
