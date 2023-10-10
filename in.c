#include "shell.h"
/**
 * in - return true value
 * @in: struct
 * Return: 1
 */
int in(mnmt *in)
{
	return (isatty(STDIN_FILENO) && in->rf <= 2);
}
