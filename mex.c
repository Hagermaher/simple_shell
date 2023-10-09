#include "shell.h"
/**
 * mex - exits
 * @in: structre
 * Return: exits
 */
int mex(info_t *in)
{
	int eh;

	if (in->argv[1])
	{
		eh = er(in->argv[1]);
		if (eh == -1)
		{
			in->st = 2;
			pe(in, "Illegal number: ");
			eps(in->argv[1]);
			epc('\n');
			return (1);
		}

		in->enm = er(in->argv[1]);
		return (-2);
	}
	in->enm = -1;
	return (-2);
}
