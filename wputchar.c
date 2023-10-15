#include "shell.h"

/**
 * wputchar - Remable
 * @a: Structning po
 * Return: Aays 0
 */

int wputchar(char a)
{
	static int o;
	static char b[1024];

	if (a == -1 || o >= 1024)
	{
		write(1, b, o);
		o = 0;
	}
	if (a != -1)
		b[o++] = a;
	return (1);
}
