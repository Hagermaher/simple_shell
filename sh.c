#include "shell.h"
/**
 * sh - block
 * @signum: the signal number
 * Return: void
 */
void sh(__attribute__((unused))int sig_num)
{
	wputs("\n");
	wputs("$ ");
	wputchar(-1);
}
