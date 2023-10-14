#include "shell.h"
/**
 * fbu - finds a bui
 * @in: parame
 * Return: -1
 */
int fbu(mnmt *in)
{
	int w;
	int b_i_r;
	qbintable qb[] = {
		{"exit", mex},
		{"env", men},
		{"help", mh},
		{"history", mhi},
		{"setenv", msv},
		{"unsetenv", mus},
		{"cd", mcd},
		{"alias", mal},
		{NULL, NULL}
	};

	b_i_r = -1;
	for (w = 0; qb[w].t; w++)
		if (_strcmp(in->argv[0], qb[w].t) == 0)
		{
			in->lc++;
			b_i_r = qb[w].f(in);
			break;
		}
	return (b_i_r);
}
