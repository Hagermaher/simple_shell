#include "shell.h"

/**
 * gni - Remable
 * @h: Structning po
 * @ok: d
 * Return: Aays 0
 */

ssize_t gni(kat *h, kat *ok)
{
	size_t o;

	o = 0;
	while (h)
	{
		if (h == ok)
			return (o);
		h = h->x;
		o++;
	}
	return (-1);
}
