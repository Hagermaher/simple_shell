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

	for (h = 0; environ[h]; h++)
		ane(&ok, environ[h], 0);
	in->q = ok;
	return (0);
}
