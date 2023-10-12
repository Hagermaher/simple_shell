#include "shell.h"

/**
 * nsw - Remable
 * @ok: Structning po
 * @px: d
 * @u: d
 * Return: Aays 0
 */

kat *nsw(kat *ok, char *px, char u)
{
	char *bt;

	bt = NULL;
	while (ok)
	{
		bt = sw(ok->s, px);
		if (bt && ((u == -1) || (*bt == u)))
			return (ok);
		ok = ok->x;
	}
	return (NULL);
}
