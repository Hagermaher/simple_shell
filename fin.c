#include "shell.h"

/**
 * fin - Remable
 * @in: Structning po
 * @t: f
 * Return: Aays 0
 */

void fin(mnmt *in, int t)
{
	ff(in->argv);
	in->argv = NULL;
	in->p = NULL;
	if (t)
	{
		if (!in->cb)
			free(in->arg);
		if (in->q)
			fli(&(in->q));
		if (in->his)
			fli(&(in->his));
		if (in->al)
			fli(&(in->al));
		ff(in->environ);
			in->environ = NULL;
		bf((void **)in->cb);
		if (in->rf > 2)
			close(in->rf);
		wputchar(-1);
	}
}
