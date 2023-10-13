#include "shell.h"

/**
 * _strlen - Remable
 * @c: Structning po
 * Return: Aays 0
 */

int _strlen(char *c)
{
	int o;

	o = 0;
	if (!c)
		return (0);
	while (*c++)
		o++;
	return (o);
}
