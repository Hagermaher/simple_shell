#include "shell.h"
/**
 * fc - finds
 * @in: parameter
 * Return: void
 */
void fc(mnmt *in)
{
	char *pa = NULL;
	int w, ke;

	in->pa = in->argv[0];
	if (in->lcf == 1)
	{
		in->lic++;
		in->lcf = 0;
	}
	for (w = 0, ke = 0; in->arg[i]; w++)
		if (!isd(in->arg[i], " \t\n"))
			ke++;
	if (!ke)
		return;

	pa = fp(in, gen(in, "PATH="), in->argv[0]);
	if (pa)
	{
		in->pa = pa;
		foc(in);
	}
	else
	{
		if ((in(in) || gen(in, "PATH=")
			|| in->argv[0][0] == '/') && ic(in, in->argv[0]))
			foc(in);
		else if (*(in->arg) != '\n')
		{
			in->st = 127;
			pe(in, "not found\n");
		}
	}
}
