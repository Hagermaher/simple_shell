#include "shell.h"
/**
 * fc - finds
 * @in: parameter
 * Return: void
 */

void fc(mnmt *in)
{
	char *pa;
	int w;
	int ke;

	pa = NULL;
	in->p = in->argv[0];
	if (in->lcf == 1)
	{
		in->lc++;
		in->lcf = 0;
	}
	for (w = 0, ke = 0; in->arg[w]; w++)
		if (!isd(in->arg[w], " \t\n"))
			ke++;
	if (!ke)
		return;

	pa = fpa(in, gen(in, "PATH="), in->argv[0]);
	if (pa)
	{
		in->p = pa;
		foc(in);
	}
	else
	{
		if ((inter(in) || gen(in, "PATH=") || in->argv[0][0] == '/')
				&& ic(in, in->argv[0]))
			foc(in);
		else if (*(in->arg) != '\n')
		{
			in->st = 127;
			pe(in, "not found\n");
		}
	}
}
