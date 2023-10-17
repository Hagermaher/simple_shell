#include "shell.h"
/**
 * _strcat - concatenatee
 * @dest: buffer
 * @src: buffer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *rt;

	rt = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (rt);
}

