#include "shell.h"
/**
 * rc - fun
 * @bu: address
 * Return: 0
 */
void rc(char *bu)
{
	int w;

	for (w = 0; bu[w] != '\0'; w++)
		if (bu[w] == '#' && (!w || bu[w - 1] == ' '))
		{
			bu[w] = '\0';
			break;
		}
}
