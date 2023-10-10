#include "shell.h"
/**
 * sw - check
 * @hs: string
 * @ndl: substring
 * Return: address
 */
char *sw(const char *hs, const char *ndl)
{
	while (*ndl)
		if (*ndl++ != *hs++)
			return (NULL);
	return ((char *)hs);
}
