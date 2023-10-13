#include "shell.h"
/**
 * pal - pstring
 * @nd: alias
 * Return: Always 0
 */
int pal(kat *nd)
{
	char *v = NULL, *o = NULL;

	if (nd)
	{
		v = _strchr(nd->s, '=');
		for (o = nd->s; o <= v; o++)
			_putchar(*o);
		_putchar('\'');
		_puts(v + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}
