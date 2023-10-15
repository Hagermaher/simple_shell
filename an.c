#include "shell.h"

/**
 * an - Remable
 * @h: Structning po
 * @s: d
 * @n: d
 * Return: Aays 0
 */

kat *an(kat **h, const char *s, int n)
{
	kat *nh;

	if (!h)
		return (NULL);
	nh = malloc(sizeof(kat));
	if (!nh)
		return (NULL);
	wmemset((void *)nh, 0, sizeof(kat));
	nh->n = n;
	if (s)
	{
		nh->s = wstrdup(s);
		if (!nh->s)
		{
			free(nh);
			return (NULL);
		}
	}
	nh->x = *h;
	*h = nh;
	return (nh);
}
