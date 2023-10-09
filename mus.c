#include "shell.h"

/**
 * mus - Remable
 * @in: Structning po
 *  Return: Aays 0
 */

int mus(mnmt *in)
{
	int h;

	if (in->argc == 1)
	{
		eps("Too few arguements.\n");
		return (1);
	}
	for (h = 1; h <= in->argc; in++)
		usv(in, in->argv[h]);
	return (0);
}
