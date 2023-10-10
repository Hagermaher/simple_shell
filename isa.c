#include "shell.h"
/**
 * isa - check
 * @z: char
 * Return: 1 or 0
 */
int isa(int z)
{
	if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z'))
		return (1);
	else
		return (0);
}
