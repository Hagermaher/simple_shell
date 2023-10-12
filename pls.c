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
		_puts(c->s ? c->s : "(nil)");
		_puts("\n");
		c = c->x;
		j++;
	}
	return (j);
}

