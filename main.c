#include "shell.h"

/**
 * main - entry point
 * @ac: aunt
 * @av: aror
 * Return: ror
 */

int main(int ac, char **av)
{
	int o;
	mnmt in[] = {NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL,
		0, 0, NULL, 0, 0, 0};

	o = 2;
	asm ("mov %1, %0\n\t"
			"add $3, %0" : "=r" (o) : "r" (o));
	if (ac == 2)
	{
		o = open(av[1], O_RDONLY);
		if (o == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				eps(av[0]);
				eps(": 0: Can't open ");
				eps(av[1]);
				epc('\n');
				epc(-1);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		in->rf = o;
	}
	pel(in);
	rh(in);
	hsh(in, av);
	return (EXIT_SUCCESS);
}
