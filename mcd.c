#include "shell.h"
/**
 * mcd - change dire
 * @in: structure
 * Return: 0
 */

int mcd(mnmt *in)
{
	char *q;
	char *dr;
	char buff[1024];
	int ch_r;

	q = getcwd(buff, 1024);
	if (!q)
		wputs("TODO: >>getcwd failure emsg here<<\n");
	if (!in->argv[1])
	{
		dr = gen(in, "HOME=");
		if (!dr)
			ch_r = chdir((dr = gen(in, "PWD=")) ? dr : "/");
		else
			ch_r = chdir(dr);
	}
	else if (wstrcmp(in->argv[1], "-") == 0)
	{
		if (!gen(in, "OLDPWD="))
		{
			wputs(q);
			wputchar('\n');
			return (1);
		}
	wputs(gen(in, "OLDPWD=")), wputchar('\n');
	ch_r = chdir((dr = gen(in, "OLDPWD=")) ? dr : "/");
	}
	else
		ch_r = chdir(in->argv[1]);
	if (ch_r == -1)
	{
		pe(in, "can't cd tp");
		eps(in->argv[1]), epc('\n');
	}
	else
	{
		sv(in, "OLDPWD", gen(in, "PWD="));
		sv(in, "PWD", getcwd(buff, 1024));
	}
	return (0);
}
