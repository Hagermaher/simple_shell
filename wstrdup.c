#include "shell.h"

/**
 * wstrdup - Remable
 * @s: Structning po
 * Return: Aays 0
 */

char *wstrdup(const char *s)
{
	int l;
	char *r;

	l = 0;
	if (s == NULL)
		return (NULL);
	while (*s++)
		l = l + 1;
	r = malloc(sizeof(char) * (l + 1));
	if (!r)
		return (NULL);
	for (l++; l--;)
		r[l] = *--s;
	return (r);
}

