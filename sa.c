#include "shell.h"
/**
 * sal - sets alia
 * @in: struct
 * @str: string
 * Return: Always 0
 */
int sal(mnmt *in, char *str)
{
	char *v;

	v = _strchr(str, '=');
	if (!v)
		return (1);
	if (!*++v)
		return (uali(in, str));

	uali(in, str);
	return (ane(&(in->al), str, 0) == NULL);
}
