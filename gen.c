#include "shell.h"

/**
 * gen - getiable
 * @in: Stre contaiaintain
 * @es: envname
 * Return: the v
 */

char *gen(mnmt *in, const char *es)
{
	kat *ok = in->q;
	char *v;

	while (ok)
	{
		v = sw(ok->s, es);
		if (v && *v)
			return (v);
		ok = ok->x;
	}
	return (NULL);
}
