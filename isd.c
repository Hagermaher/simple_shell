#include "shell.h"
/**
 * isd - checd
 * @z: char
 * @d: delim
 * Return: 1 if true, else 0
 */
int isd(char z, char *d)
{
	while (*d)
		if (*d++ == z)
			return (1);
	return (0);
}
