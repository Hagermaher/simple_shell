#include "shell.h"
/**
 * mal - mimics the alia
 * @in: Structure
 * Return: Always 0
 */
int mal(mnmt *in)
{
	int w;
	char *v;
	kat *nd;

	nd = NULL;
	v = NULL;
	w = 0;
	if (in->argc == 1)
	{
		nd = in->al;
		while (nd)
		{
			pal(nd);
			nd = nd->x;
		}
		return (0);
	}
	for (w = 1; in->argv[w]; w++)
	{
		v = _strchr(in->argv[w], '=');
		if (v)
			sal(in, in->argv[w]);
		else
			pal(nsw(in->al, in->argv[w], '='));
	}

	return (0);
}
