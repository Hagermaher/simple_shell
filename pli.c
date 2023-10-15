#include "shell.h"

/**
 * pli - Remable
 * @c: Structning po
 * Return: Aays 0
 */

size_t pli(const kat *c)
{
	size_t o;

	o = 0;
	while (c)
	{
		wputs(cn(c->n, 10, 0));
		wputchar(':');
		wputchar(' ');
		wputs(c->s ? c->s : "(nil)");
		wputs("\n");
		c = c->x;
		o++;
	}
	return (o);
}
