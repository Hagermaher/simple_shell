#include "shell.h"

/**
 * _puts - Remable
 * @s: Structning po
 * Return: Aays 0
 */

void _puts(char *s)
{
	int o;

	o = 0;
	if (!s)
		return;
	while (s[o] != '\0')
	{
		_putchar(s[o]);
		o++;
	}
}

