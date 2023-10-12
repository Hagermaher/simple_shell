#include "shell.h"

/**
 * ich - Remable
 * @in: Structning po
 * @b: f
 * @bt: g
 * Return: Aays 0
 */

int ich(mnmt *in, char *b, size_t *bt)
{
	size_t k = *bt;

	if (b[k] == '|' && b[k + 1] == '|')
	{
		b[k] = 0;
		k++;
		in->cbt = 1;
	}
	else if (b[k] == '&' && b[k + 1] == '&')
	{
		b[k] = 0;
		k++;
		in->cbt = 2;
	}
	else if (b[k] == ';')
	{
		b[k] = 0;
		in->cbt = 3;
	}
	else
		return (0);
	*bt = k;
	return (1);
}
