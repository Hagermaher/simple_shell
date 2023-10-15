#include "shell.h"

/**
 * wstrcat - Remable
 * @d: Structning po
 * @s: c
 * Return: Aays 0
 */

char *wstrcat(char *d, char *s)
{
	char *r;

	r = d;
	while (*d)
		d++;
	while (*s)
		*d++ = *s++;
	*d = *s;
	return (r);
}
