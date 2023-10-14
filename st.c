#include "shell.h"

/**
 * **st - splits
 * @str: the input string
 * @y: delimeter
 * Return: pointer
 */
char **st(char *str, char *y)
{
	int w, g, ke, im, nw = 0;
	char **es;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!y)
		y = " ";
	for (w = 0; str[w] != '\0'; w++)
		if (!isd(str[w], y) && (isd(str[w + 1], y) || !str[w + 1]))
			nw++;

	if (nw == 0)
		return (NULL);
	es = malloc((1 + nw) * sizeof(char *));
	if (!es)
		return (NULL);
	for (w = 0, g = 0; g < nw; g++)
	{
		while (isd(str[w], y))
			w++;
		ke = 0;
		while (!isd(str[w + ke], y) && str[w + ke])
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
