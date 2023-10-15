#include "shell.h"
/**
 * fpa - finds cmd
 * @in: info
 * @pas: string
 * @cm: cmd
 * Return: path
 */
char *fpa(mnmt *in, char *pas, char *cm)
{
	int w;
	int cpo;
	char *pa;

	w = 0;
	cpo = 0;
	if (!pas)
		return (NULL);
	if ((wstrlen(cm) > 2) && sw(cm, "./"))
	{
		if (ic(in, cm))
			return (cm);
	}
	while (1)
	{
		if (!pas[w] || pas[w] == ':')
		{
			pa = dc(pas, cpo, w);
			if (!*pa)
				wstrcat(pa, cm);
			else
			{
				wstrcat(pa, "/");
				wstrcat(pa, cm);
			}
			if (ic(in, pa))
				return (pa);
			if (!pas[w])
				break;
			cpo = w;
		}
		w++;
	}
	return (NULL);
}
