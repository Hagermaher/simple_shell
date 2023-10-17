#include "shell.h"
/**
 * wh - creates a file
 * @in: struct
 * Return: 1
 */
int wh(mnmt *in)
{
	ssize_t f;
	char *fin;
	kat *nd;

	fin = ghf(in);
	nd = NULL;
	if (!fin)
		return (-1);

	f = open(fin, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(fin);
	if (f == -1)
		return (-1);
	for (nd = in->his; nd; nd = nd->x)
	{
		psfd(nd->s, f);
		pfd('\n', f);
	}
	pfd(-1, f);
	close(f);
	return (1);
}
