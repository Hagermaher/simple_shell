#include "shell.h"

/**
 * in - Remable
 * @in: Structning po
 *  Return: Aays 0
 */

int in(mnmt *in)
{
	return (isatty(STDIN_FILENO) && in->rf <= 2);
}
