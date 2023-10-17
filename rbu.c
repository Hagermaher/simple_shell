#include "shell.h"
/**
 * rbu - reads
 * @in: parameter struct
 * @bu: buffer
 * @w: size
 * Return: v
 */
ssize_t rbu(mnmt *in, char *bu, size_t *w)
{
	ssize_t vr;

	vr = 0;
	if (*w)
		return (0);
	vr = read(in->rf, bu, 1024);
	if (vr >= 0)
		*w = vr;
	return (vr);
}
