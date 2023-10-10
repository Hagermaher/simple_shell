#include "shell.h"
/**
 * isa - Remable
 * @g: Structning po
 *  Return: Aays 0
 */
int isa(int g)
{
	if ((g >= 97 && g <= 122) || (g >= 65 && g <= 90))
		return (1);
	else
		return (0);
}
