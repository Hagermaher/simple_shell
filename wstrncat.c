#include "shell.h"

/**
 * wstrncat - concatenates two strings
 * @dest: inut value
 * @src: input vle
 * @n: input value
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
