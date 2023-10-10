#include "shell.h"
/**
 * eps - print string
 * @str: string
 * Return: nul
 */
void eps(char *str)
{
	int w;

	w = 0;
	if (!str)
		return;
	while (str[w] != '\0')
	{
		epc(str[w]);
		w = w + 1;
	}
}
