#include "shell.h"

/**
 * mus - Remable
 * @o: b
 * @n: Structning po
 * Return: Aays 0
 */

int rst(char **o, char *n)
{
	free(*o);
	*o = n;
	return (1);
}
