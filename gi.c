#include "shell.h"
/**
 * gi - get
 * @in: parameter
 * Return: bytes
 */
ssize_t gi(mnmt *in)
{
	static char *bu;
	static size_t w;
	static size_t g;
	static size_t l;
	ssize_t vr = 0;
	char **bu_p = &(in->arg);
	char *p;

	bu_p = &(in->arg);
	wputchar(-1);
	vr = ibu(in, &bu, &l);
	if (vr == -1)
		return (-1);
	if (l)
	{
		g = w;
		p = bu + w;

		chc(in, bu, &g, w, l);
		while (g < l)
		{
			if (ich(in, bu, &g))
				break;
			g++;
		}

		w = g + 1;
		if (w >= l)
		{
			w = l = 0;
			in->cbt = 0;
		}

		*bu_p = p;
		return (wstrlen(p));
	}

	*bu_p = bu;
	return (vr);
}

