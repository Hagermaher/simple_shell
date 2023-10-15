#include "shell.h"
/**
 * pd - function
 * @inp: input
 * @f: filedescript
 * Return: number
 */
int pd(int inp, int f)
{
	int (*wwputchar)(char) = wputchar;
	int w, co = 0;
	unsigned int abs, cur;

	if (f == STDERR_FILENO)
		wwputchar = epc;
	if (inp < 0)
	{
		abs = -inp;
		wwputchar('-');
		co++;
	}
	else
		abs = inp;
	cur = abs;
	for (w = 1000000000; w > 1; w /= 10)
	{
		if (abs / w)
		{
			wwputchar('0' + cur / w);
			co++;
		}
		cur %= w;
	}
	wwputchar('0' + cur);
	co++;

	return (co);
}
