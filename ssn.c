#include "shell.h"

/**
 * ssn - Remable
 * @in: Structning po
 * @av: fd
 * Return: Aays 0
 */

void ssn(mnmt *in, char **av)
{
	int o;

	o = 0;
	in->fn = av[0];
	if (in->arg)
	{
		in->argv = st(in->arg, " \t");
		if (!in->argv)
		{

			in->argv = malloc(sizeof(char *) * 2);
			if (in->argv)
			{
				in->argv[0] = _strdup(in->arg);
				in->argv[1] = NULL;
			}
		}
		for (o = 0; in->argv && in->argv[o]; o++)
			;
		in->argc = o;

		ral(in);
		rva(in);
	}
}
