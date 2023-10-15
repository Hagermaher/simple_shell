#include "shell.h"

/**
 * wstrcmp - Remable
 * @c1: Structning po
 * @c2: fd
 * Return: Aays 0
 */

int wstrcmp(char *c1, char *c2)
{
	while (*c1 && *c2)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	if (*c1 == *c2)
		return (0);
	else
		return (*c1 < *c2 ? -1 : 1);
}

