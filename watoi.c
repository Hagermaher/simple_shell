#include "shell.h"

/**
 * watoi - convert
 * @u: string to convert
 * Return: 0
 */

int watoi(char *u)
{
	int w;
	int si;
	int fl;
	int op;
	unsigned int res;

	si = 1;
	fl = 0;
	res = 0;
	for (w = 0; u[w] != '\0' && fl != 2; w++)
	{
		if (u[w] == '-')
			si *= -1;

		if (u[w] >= '0' && u[w] <= '9')
		{
			fl = 1;
			res = res * 10;
			res = res + (u[w] - '0');
		}
		else if (fl == 1)
			fl = 2;
	}
	if (si == -1)
		op = -res;
	else
		op = res;
	return (op);
}
