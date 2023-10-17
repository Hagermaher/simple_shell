#include "shell.h"
/**
 * foc - forks
 * @in: param
 * Return: void
 */
void foc(mnmt *in)
{
	pid_t chi_p;

	chi_p = fork();
	if (chi_p == -1)
	{
		perror("Error:");
		return;
	}
	if (chi_p == 0)
	{
		if (execve(in->p, in->argv, genv(in)) == -1)
		{
			fin(in, 1);
			if (errno == EACCES)
			exit(126);
			exit(1);
		}
	}
	else
	{
		wait(&(in->st));
		if (WIFEXITED(in->st))
		{
			in->st = WEXITSTATUS(in->st);
			if (in->st == 126)
				pe(in, "Permission denied\n");
		}
	}
}
