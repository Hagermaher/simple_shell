#include "shell.h"

/**
 * msv - Initiable
 * @in: Structur
 * Return: Alwys 0
 */

int msv(mnmt *in)
{
	if (in->argc != 3)
	{
		eps("Incorrect number of arguements\n");
		return (1);
	}
	if (sv(in, in->argv[1], in->argv[2]))
		return (0);
	return (1);
}
