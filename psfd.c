#include "shell.h"
/**
 * psfd - print string
 * @str: string
 * @f: file
 * Return: num
 */
int psfd(char *str, int f)
{
	int w;

	w = 0;
	if (!str)
		return (0);
	while (*str)
	{
		w += pfd(*str++, f);
	}
	return (w);
}
