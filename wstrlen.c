#include "shell.h"

/**
 * wstrlen - Remable
 * @c: Structning po
 * Return: Aays 0
 */

int wstrlen(char *c)
{
	int o;

	o = 0;
	if (!c)
		return (0);
	while (*c++)
		o++;
	return (o);
}
