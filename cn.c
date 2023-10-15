#include "shell.h"
/**
 * cn - converter function
 * @nu: number
 * @ba: base
 * @fl: argument
 * Return: string
 */
char *cn(long int nu, int ba, int fl)
{
	static char *arr;
	static char buff[50];
	char sig = 0;
	char *pr;
	unsigned long vii = nu;

	if (!(fl & 2) && nu < 0)
	{
		vii = -nu;
		sig = '-';

	}
	arr = fl & 1 ? "0123456789abcdef" : "0123456789ABCDEF";
	pr = &buff[49];
	*pr = '\0';

	do	{
		*--pr = arr[vii % ba];
		vii /= ba;
	} while (vii != 0);

	if (sig)
		*--pr = sig;
	return (pr);
}
