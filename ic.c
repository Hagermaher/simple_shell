#include "shell.h"

/**
 * ic - determines
 * @in: struct
 * @pa: path
 * Return: 1
 */
int ic(mnmt *in, char *pa)
{
	struct stat st;

	(void)in;
	if (!pa || stat(pa, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
