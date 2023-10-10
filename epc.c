#include "shell.h"
/**
 * epc - char
 * @z: character to print
 * Return: 1 or -1
 */
int epc(char z)
{
	st int w;
	st char bu[1024];

	if (z == -1 || z >= 1024)
	{
		write(2, bu, w);
		w = 0;
	}
	if (z != -1)
		bu[w++] = c;
	return (1);
}
