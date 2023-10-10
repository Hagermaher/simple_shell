#include "shell.h"

/**
 * wmemset - Remable
 * @x: Structning po
 * @v: ffd
 * @r: fg
 * Return: Aays 0
 */

char *wmemset(char *x, char v, unsigned int r)
{
	unsigned int h;

	for (h = 0; h < r; h++)
		x[h] = v;
	return (x);
}
