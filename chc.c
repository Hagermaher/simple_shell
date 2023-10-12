#include "shell.h"

/**
 * chc - Remable
 * @in: Structning po
 * @b: Structning po
 * @bt: Structning po
 * @h: Structning po
 * @l: Structning po
 * Return: Aays 0
 */

void chc(mnmt *in, char *b, size_t *bt, size_t h, size_t l)
{
	size_t k = *bt;

	if (in->cbt == 2)
	{
		if (in->st)
		{
			b[h] = 0;
			k = l;
		}
	}
	if (in->cbt == 1)
	{
		if (!in->st)
		{
			b[h] = 0;
			k = l;
		}
	}

	*bt = k;
}
