#include "shell.h"
/**
 * uali - sets string
 * @in: struct
 * @str: string
 * Return: 0
 */
int uali(mnmt *in, char *str)
{
	char *v;
	int r;
	char z;

	v = wstrchr(str, '=');
	if (!v)
		return (1);
	z = *v;
	*v = 0;
	r = dnai(&(in->al),
		gni(in->al, nsw(in->al, str, -1)));
	*v = z;
	return (r);
}
