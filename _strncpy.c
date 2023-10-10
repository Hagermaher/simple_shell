#include "shell.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, u;
	char *a = dest;

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
