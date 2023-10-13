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
	bu = malloc(sizeof(char) * (_strlen(dr) +
			_strlen(".simple_shell_history") + 2));
	if (!bu)
		return (NULL);
	bu[0] = 0;
	_strcpy(bu, dr);
	_strcat(bu, "/");
	_strcat(bu, ".simple_shell_history");
	return (bu);
}
