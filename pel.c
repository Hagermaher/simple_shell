#include "shell.h"

/**
 * pel - Initiable
 * @in: Structur
 * Return: Alwys 0
 */

int pel(mnmt *in)
{
	kat *ok = NULL;
	size_t h;

	for (h = 0; qen[h]; h++)
		add_node_end(&ok, qen[h], 0);
	in->q = ok;
	return (0);
}
