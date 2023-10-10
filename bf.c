#include "shell.h"

/**
 * bf - Remable
 * @bt: Structning po
 * Return: Aays 0
 */

int bf(void **bt)
{
	if (bt && *bt)
	{
		free(*bt);
		*bt = NULL;
		return (1);
	}
	return (0);
}
