#include "shell.h"

/**
 * rva - Remable
 * @in: Structning po
 * Return: Aays 0
 */

int rva(mnmt *in)
{
	int h;
	kat *ok;

	h = 0;
	for (h = 0; in->argv[h]; h++)
	{
		if (in->argv[h][0] != 36 || !in->argv[h][1])
			continue;
		if (!wstrcmp(in->argv[h], "$?"))
		{
			rst(&(in->argv[h]),
				wstrdup(cn(in->st, 10, 0)));
			continue;
		}
		if (!wstrcmp(in->argv[h], "$$"))
		{
			rst(&(in->argv[h]),
				wstrdup(cn(getpid(), 10, 0)));
			continue;
		}
		ok = nsw(in->q, &in->argv[h][1], '=');
		if (ok)
		{
			rst(&(in->argv[h]),
				wstrdup(wstrchr(ok->s, '=') + 1));
			continue;
		}
		rst(&in->argv[h], wstrdup(""));

	}
	return (0);
}

