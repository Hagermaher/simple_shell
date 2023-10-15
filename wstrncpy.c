#include "shell.h"
/**
 * wstrncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *wstrncpy(char *dest, char *src, int n)
{
	int j;
	int u;
	char *a;

	a = dest;
	u = 0;
	while (src[u] != '\0' && u < n - 1)
	{
		dest[u] = src[u];
		u++;
	}
	if (u < n)
	{
		j = u;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (a);
}
