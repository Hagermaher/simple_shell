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
	int w = 0, cpo = 0;
	char *pa;

	if (!pas)
		return (NULL);
	if ((_strlen(cm) > 2) && sw(cm, "./"))
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
				_strcat(pa, cm);
			else
			{
				_strcat(pa, "/");
				_strcat(pa, cm);
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
