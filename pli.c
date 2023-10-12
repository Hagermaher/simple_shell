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
		_puts(cn(c->n, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(c->s ? c->s : "(nil)");
		_puts("\n");
		c = c->x;
		o++;
	}
	return (o);
}
