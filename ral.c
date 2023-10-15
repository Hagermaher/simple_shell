#include "shell.h"

/**
 * ral - Remable
 * @in: Structning po
 * Return: Aays 0
 */

int ral(mnmt *in)
{
	int h;
	kat *ok;
	char *bt;

	for (h = 0; h < 10; h++)
	{
		ok = nsw(in->al, in->argv[0], '=');
		if (!ok)
			return (0);
		free(in->argv[0]);
		bt = wstrchr(ok->s, '=');
		if (!bt)
			return (0);
		bt = wstrdup(bt + 1);
		if (!bt)
			return (0);
		in->argv[0] = bt;
	}
	return (1);
}

