#include "shell.h"
/**
 * pe - print
 * @in: param
 * @est: string
 * Return: 0
 */
void pe(mnmt *in, char *est)
{
	eps(in->fn);
	eps(": ");
	pd(in->lc, STDERR_FILENO);
	eps(": ");
	eps(in->argv[0]);
	eps(": ");
	eps(est);
}
