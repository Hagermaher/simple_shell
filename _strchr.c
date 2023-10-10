#include "shell.h"
/**
 * _strchr - locate char
 * @a: string
 * @z: char
 * Return: z
 */
char *_strchr(char *a, char z)
{
	do {
		if (*a == z)
			return (a);
	} while (*a++ != '\0');

	return (NULL);
}
