#include "shell.h"

/**
 * pls - Remable
 * @c: Structning po
 * Return: Aays 0
 */

size_t pls(const kat *c)
{
	size_t j;

	j = 0;
	while (c)
	{
		wputs(c->s ? c->s : "(nil)");
		wputs("\n");
		c = c->x;
		j++;
	}
	return (j);
}

