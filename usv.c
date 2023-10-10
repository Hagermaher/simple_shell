#include "shell.h"

/**
 * usv - Initiable
 * @in: Structur
 * @m: dw
 * Return: Alwys 0
 */

int usv(mnmt *in, char *m)
{
	kat *ok = in->q;
	size_t h = 0;
	char *b;

	if (!ok || !m)
		return (0);
	while (ok)
	{
		b = sw(ok->s, m);
		if (b && *b == '=')
		{
			in->envch = dnai(&(in->q), h);
			h = 0;
			ok = in->q;
			continue;
		}
		ok = ok->x;
		h++;
	}
	return (in->envch);
}
