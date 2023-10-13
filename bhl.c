#include "shell.h"
/**
 * bhl - adds
 * @in: Structure
 * @bu: buffer
 * @lic: linecount
 * Return: Always 0
 */
int bhl(mnmt *in, char *bu, int lic)
{
	kat *nd = NULL;

	if (in->his)
		nd = in->his;
	ane(&nd, bu, lic);

	if (!in->his)
		in->his = nd;
	return (0);
}
