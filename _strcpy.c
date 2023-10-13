#include "shell.h"

/**
 * _strcpy - Remable
 * @d: Structning po
 * @s: f
 * Return: Aays 0
 */

char *_strcpy(char *d, char *s)
{
	int o;

	o = 0;
	if (d == s || s == 0)
		return (d);
	while (s[o])
	{
		d[o] = s[o];
		o++;
	}
	d[o] = 0;
	return (d);
}
