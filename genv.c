#include "shell.h"

/**
 * genv - Initiable
 * @in: Structur
 * Return: Alwys 0
 */

char **genv(mnmt *in)
{
	if (!in->environ || in->envch)
	{
		in->environ = lts(in->q);
		in->envch = 0;
	}
	return (in->environ);
}
