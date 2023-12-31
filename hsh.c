#include "shell.h"
/**
 * hsh - shell loop
 * @in: the paramet
 * @avi: the argument
 * Return: 0
 */
int hsh(mnmt *in, char **avi)
{
	ssize_t m;
	int b_r;

	m = 0;
	b_r = 0;
	while (m != -1 && b_r != -2)
	{
		cin(in);
		if (inter(in))
			wputs("$ ");
		epc(-1);
		m = gi(in);
		if (m != -1)
		{
			ssn(in, avi);
			b_r = fbu(in);
			if (b_r == -1)
				fc(in);
		}
		else if (inter(in))
			wputchar('\n');
		fin(in, 0);
	}
	wh(in);
	fin(in, 1);
	if (!inter(in) && in->st)
		exit(in->st);
	if (b_r == -2)
	{
		if (in->enm == -1)
			exit(in->st);
		exit(in->enm);
	}
	return (b_r);
}
