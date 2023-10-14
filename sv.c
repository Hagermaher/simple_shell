#include "shell.h"

/**
 * sv - Initiable
 * @in: Structur
 * @y: dw
 * @u: fg
 * Return: Alwys 0
 */
int sv(mnmt *in, char *y, char *u)
{
	char *f;
	kat *ok;
	char *b;

	f = NULL;
	if (!y || !u)
		return (0);
	f = malloc(wstrlen(y) + wstrlen(u) + 2);
	if (!f)
		return (1);
	wstrcpy(f, y);
	wstrcat(f, "=");
	wstrcat(f, u);
	ok = in->q;
	while (ok)
	{
		b = sw(ok->s, y);
		if (b && *b == '=')
		{
			free(ok->s);
			ok->s = f;
			in->envch = 1;
			return (0);
		}
		ok = ok->x;
	}
	ane(&(in->q), f, 0);
	free(f);
	in->envch = 1;
	return (0);
}
