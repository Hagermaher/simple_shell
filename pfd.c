#include "shell.h"
/**
 * pfd - write char
 * @z: chae
 * @f: file
 * Return: 1 or -1
 */
int pfd(char z, int f)
{
	static int w;
	static char bu[1024];

	if (z == -1 || w >= 1024)
	{
		write(f, bu, w);
		w = 0;
	}
	if (z != -1)
		bu[w++] = z;
	return (1);
}
