#include "shell.h"
/**
 * **stw - splits
 * @str: string
 * @y: delimeter
 * Return: pointer
 */
char **stw(char *str, char y)
{
	int w, g, ke, im, nw = 0;
	char **es;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (w = 0; str[w] != '\0'; w++)
		if ((str[w] != y && str[w + 1] == y) ||
		    (str[w] != y && !str[w + 1]) || str[w + 1] == y)
			nw++;
	if (nw == 0)
		return (NULL);
	es = malloc((1 + nw) * sizeof(char *));
	if (!es)
		return (NULL);
	for (w = 0, g = 0; g < nw; g++)
	{
		while (str[w] == y && str[w] != y)
			i++;
		ke = 0;
		while (str[w + ke] != y && str[w + ke] && str[w + ke] != y)
			ke++;
		es[g] = malloc((ke + 1) * sizeof(char));
		if (!es[g])
		{
			for (ke = 0; ke < g; ke++)
				free(es[ke]);
			free(es);
			return (NULL);
		}
		for (im = 0; im < ke; im++)
			es[g][im] = str[w++];
		es[g][im] = 0;
	}
	es[g] = NULL;
	return (es);
}
