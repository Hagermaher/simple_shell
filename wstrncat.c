#include "shell.h"

/**
 * wstrncat - concatenates two strings
 * @dest: iu au
 * @src: int
 * @n: inuau
 * Return: string
 */
char *wstrncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *a;

	a = dest;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	dest[i] = '\0';
	return (a);
}
