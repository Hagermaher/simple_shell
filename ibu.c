#include "shell.h"
/**
 * ibu - buffers chain
 * @in: struct
 * @bu: addr
 * @l: address
 * Return: bytes
 */
ssize_t ibu(mnmt *in, char **bu, size_t *l)
{
	ssize_t vr;
	size_t l_p;

	vr = 0;
	l_p = 0;
	if (!*l)
	{
		free(*bu);
		*bu = NULL;
		signal(SIGINT, sh);
#if USE_GETLINE
		vr = gl(bu, &l_p, stdin);
#else
		vr = gl(in, bu, &l_p);
#endif
		if (vr > 0)
		{
			if ((*bu)[vr - 1] == '\n')
			{
				(*bu)[vr - 1] = '\0';
				vr--;
			}
			in->lcf = 1;
			rc(*bu);
			bhl(in, *bu, in->hisc++);
			{
				*l = vr;
				in->cb = bu;
			}
		}
	}
	return (vr);
}
