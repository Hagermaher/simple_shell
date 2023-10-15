#include "shell.h"

/**
 * wputs - Remable
 * @s: Structning po
 * Return: Aays 0
 */

void wputs(char *s)
{
	int o;

	o = 0;
	if (!s)
		return;
	while (s[o] != '\0')
	{
		wputchar(s[o]);
		o++;
	}
}

