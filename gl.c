#include "shell.h"
/**
 * gl - get
 * @in: parameter
 * @pr: address
 * @lw: size
 * Return: es
 */
int gl(mnmt *in, char **pr, size_t *lw)
{
	static char bu[1024];
	static size_t w, l;
	size_t ke;
	ssize_t vr = 0, es = 0;
	char *pii = NULL, *n_p = NULL, *ci;

	pii = *pr;
	if (pii && lw)
		es = *lw;
	if (w == l)
		w = l = 0;

	vr = rbu(in, bu, &l);
	if (vr == -1 || (vr == 0 && l == 0))
		return (-1);

	ci = wstrchr(bu + w, '\n');
	ke = ci ? 1 + (unsigned int)(ci - bu) : l;
	n_p = wrealloc(pii, es, es ? es + ke : ke + 1);
	if (!n_p)
		return (pii ? free(pii), -1 : -1);

	if (es)
		wstrncat(n_p, bu + w, ke - w);
	else
		wstrncpy(n_p, bu + w, ke - w + 1);

	es += ke - w;
	w = ke;
	pii = n_p;

	if (lw)
		*lw = es;
	*pr = pii;
	return (es);
}
