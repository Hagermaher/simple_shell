#include "shell.h"

/**
 * ff - Remable
 * @bb: Structning po
 * Return: Aays 0
 */

void ff(char **bb)
{
	char **o;

	o = bb;
	if (!bb)
		return;
	while (*bb)
		free(*bb++);
	free(o);
}
