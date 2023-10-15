#include "shell.h"
/**
 * wstrchr - locate char
 * @a: stvring
 * @z: char
 * Return: z
 */
char *wstrchr(char *a, char z)
{
	do {
		if (*a == z)
			return (a);
	} while (*a++ != '\0');

	return (NULL);
}
