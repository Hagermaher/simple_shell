#include "shell.h"

/**
 * fli - Remable
 * @hp: Structning po
 * Return: Aays 0
 */

void fli(kat **hp)
{
	kat *ok;
	kat *nn;
	kat *h;

	if (!hp || !hp)
		return;
	h = *hp;
	ok = h;
	while (ok)
	{
		nn = ok->x;
		free(ok->s);
		free(ok);
		ok = nn;
	}
	*hp = NULL;
}
