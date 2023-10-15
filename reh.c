#include "shell.h"
/**
 * reh - renumbers
 * @in: Structur
 * Return: histcount
 */
int reh(mnmt *in)
{
	kat *nd;
	int w;

	nd = in->his;
	w = 0;
	while (nd)
	{
		nd->n = w++;
		nd = nd->x;
	}
	return (in->hisc = w);
}
