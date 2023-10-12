#include "shell.h"

/**
 * lle - Remable
 * @c: Structning po
 * Return: Aays 0
 */

size_t lle(const kat *c)
{
	size_t m;

	m = 0;
	while (c)
	{
		c = c->x;
		m++;
	}
	return (m);
}
