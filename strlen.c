#include "shell.h"
/**
 * _strlen - string lenght
 * @a: string
 * Return: int
 */
int _strlen(char *a)
{
	int w = 0;

	if (!a)
		return (0);

	while (*a++)
		w++;
	return (w);
}

