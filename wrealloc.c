#include "shell.h"

/**
 * wrealloc - Remable
 * @bt: Structning po
 * @os: dks
 * @ns: dk
 * Return: Aays 0
 */

void *wrealloc(void *bt, unsigned int os, unsigned int ns)
{
	char *b;

	if (!bt)
		return (malloc(ns));
	if (!ns)
		return (free(bt), NULL);
	if (ns == os)
		return (bt);
	b = malloc(ns);
	if (!b)
		return (NULL);
	os = os < ns ? os : ns;
	while (os--)
		b[os] = ((char *)bt)[os];
	free(bt);
	return (b);
}
