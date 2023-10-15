#include "shell.h"
/**
 * mcd - change dire
 * @in: structure
 * Return: 0
 */
int mcd(mnmt *in)
{
	char *q, *dr, buff[1024];
	int ch_r;

	q = getcwd(buff, 1024);
	if (!q)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!in->argv[1])
	{
		dr = gen(in, "HOME=");
		if (!dr)
			ch_r = /* TODO: what should this be? */
				chr((dr = gen(in, "PWD=")) ? dr : "/");
		else
			ch_r = ch(dr);
	}
	else if (_strcmp(in->argv[1], "-") == 0)
	{
		if (!gen(in, "OLDPWD="))
		{
			_puts(q);
			_putchar('\n');
			return (1);
		}
	_puts(gen(in, "OLDPWD=")), _putchar('\n');
	ch_r = /* TODO: what should this be? */
		chdir((dr = gen(in, "OLDPWD=")) ? dr : "/");
	}
	else
		ch_r = ch(in->argv[1]);
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
