#include "shell.h"
/**
 * ual - sets string
 * @in: struct
 * @str: string
 * Return: 0
 */
int ual(mnmt *in, char *str)
{
	char *v, z;
	int r;

	v = _strchr(str, '=');
	if (!v)
		return (1);
	z = *v;
	*v = 0;
	r = dnai(&(in->al),
		gni(in->al, nsw(in->al, str, -1)));
	*v = z;
	return (r);
}
