#include "shell.h"
/**
 * rh - reads history
 * @in: struct
 * Return: histcount
 */
int rh(mnmt *in)
{
	int w;
	int la;
	int lic;
	ssize_t rl;
	ssize_t fs;
	ssize_t f;
	struct stat st;
	char *bu;
	char *fin;

	la = 0;
	lic = 0;
	fs = 0;
	bu = NULL;
	fin = ghf(in);
	if (!fin)
		return (0);

	f = open(fin, O_RDONLY);
	free(fin);
	if (f == -1)
		return (0);
	if (!fstat(f, &st))
		fs = st.st_size;
	if (fs < 2)
		return (0);
	bu = malloc(sizeof(char) * (fs + 1));
	if (!bu)
		return (0);
	rl = read(f, bu, fs);
	bu[fs] = 0;
	if (rl <= 0)
		return (free(bu), 0);
	close(f);
	for (w = 0; w < fs; w++)
		if (bu[w] == '\n')
		{
			bu[w] = 0;
			bhl(in, bu + la, lic++);
			la = w + 1;
		}
	if (la != w)
		bhl(in, bu + la, lic++);
	free(bu);
	in->hisc = lic;
	while (in->hisc-- >= 4096)
		dnai(&(in->his), 0);
	reh(in);
	return (in->hisc);
}
