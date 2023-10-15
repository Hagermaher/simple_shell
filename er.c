#include "shell.h"
/**
 * er - converts
 * @es: string
 * Return: 0
 */
int er(char *es)
{
	int w;
	unsigned long int res;

	w = 0;
	res = 0;
	if (*es == '+')
		es++;
	for (w = 0;  es[w] != '\0'; w++)
	{
		if (es[w] >= '0' && es[w] <= '9')
		{
			res *= 10;
			res += (es[w] - '0');
			if (res > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (res);
}
