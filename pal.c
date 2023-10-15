#include "shell.h"
/**
 * pal - pstring
 * @nd: alias
 * Return: Always 0
 */
int pal(kat *nd)
{
	char *v;
	char *o;

	o = NULL;
	v = NULL;
	if (nd)
	{
		v = wstrchr(nd->s, '=');
		for (o = nd->s; o <= v; o++)
			wputchar(*o);
		wputchar('\'');
		wputs(v + 1);
		wputs("'\n");
		return (0);
	}
	return (1);
}
