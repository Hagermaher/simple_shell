#include "shell.h"

/**
 * lts - Remable
 * @h: Structning po
 * Return: Aays 0
 */

char **lts(kat *h)
{
	kat *ok;
	size_t g;
	size_t o;
	char **ss;
	char *s;

	ok = h;
	o = lle(h);
	if (!h || !o)
		return (NULL);
	ss = malloc(sizeof(char *) * (o + 1));
	if (!ss)
		return (NULL);
	for (o = 0; ok; ok = ok->x, o++)
	{
		s = malloc(wstrlen(ok->s) + 1);
		if (!s)
		{
			for (g = 0; g < o; g++)
				free(ss[g]);
			free(ss);
			return (NULL);
		}
		s = _strcpy(s, ok->s);
		ss[o] = s;
	}
	ss[o] = NULL;
	return (ss);
}
