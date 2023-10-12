#include "shell.h"

/**
 * ane - Remable
 * @h: Structning po
 * @s: f
 * @n: dj
 * Return: Aays 0
 */

kat *ane(kat **h, const char *s, int n)
{
	kat *nn, *ok;

	if (!h)
		return (NULL);
	ok = *h;
	nn = malloc(sizeof(kat));
	if (!nn)
		return (NULL);
	wmemset((void *)nn, 0, sizeof(kat));
	nn->n = n;
	if (s)
	{
		nn->s = _strdup(s);
		if (!nn->s)
		{
			free(nn);
			return (NULL);
		}
	}
	if (ok)
	{
		while (ok->x)
			ok = ok->x;
		ok->x = nn;
	}
	else
		*h = nn;
	return (nn);
}
