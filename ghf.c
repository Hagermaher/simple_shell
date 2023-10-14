#include "shell.h"

/**
 * ghf - gets
 * @in: struct
 * Return: allocated string
 */
char *ghf(mnmt *in)
{
	char *bu, *dr;

	dr = gen(in, "HOME=");
	if (!dr)
		return (NULL);
	bu = malloc(sizeof(char) * (wstrlen(dr) +
			wstrlen(".simple_shell_history") + 2));
	if (!bu)
		return (NULL);
	bu[0] = 0;
	wstrcpy(bu, dr);
	wstrcat(bu, "/");
	wstrcat(bu, ".simple_shell_history");
	return (bu);
}
