#include "shell.h"

/**
 * dnai - Remable
 * @h: Structning po
 * @ix: d
 * Return: Aays 0
 */

int dnai(kat **h, unsigned int ix)
{
	kat *ok, *pn;
	unsigned int m;

	m = 0;
	if (!h || !*h)
		return (0);
	if (!ix)
	{
		ok = *h;
		*h = (*h)->x;
		free(ok->s);
		free(ok);
		return (1);
	}
	ok = *h;
	while (ok)
	{
		if (m == ix)
		{
			pn->x = ok->x;
			free(ok->s);
			free(ok);
			return (1);
		}
		m++;
		pn = ok;
		ok = ok->x;
	}
	return (0);
}

