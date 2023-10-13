#include "shell.h"
/**
 * reh - renumbers
 * @in: Structur
 * Return: histcount
 */
int reh(mnmt *in)
{
	kat *nd = in->his;
	int w = 0;

	while (nd)
	{
		nd->n = w++;
		nd = nd->n;
	}
	return (in->hisc = w);
}
