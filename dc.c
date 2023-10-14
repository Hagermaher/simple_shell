#include "shell.h"
/**
 * dc - duplicates
 * @pas: the PATH string
 * @star: starting
 * @sto: stopping
 * Return: pointer
 */
char *dc(char *pas, int star, int sto)
	{
	static char buf[1024];
	int w, ke;

	w = 0;
	ke = 0;

	for (ke = 0, w = star; w < sto; w++)
		if (pas[w] != ':')
			bu[ke++] = pas[w];
	bu[ke] = 0;
	return (bu);
}
