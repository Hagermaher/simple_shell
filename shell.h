#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;

/**
 * struct ka - linked list
 * @n: the number field
 * @s: a string
 * @x: points to the next node
 */
typedef struct ka
{
	int n;
	char *s;
	struct ka *x;
} kat;

/**
 * struct mnm - contains pseudo
 * @arg: string
 * @argv: array
 * @p: string
 * @argc: argument
 * @lc: count error
 * @enm: error code
 * @lcf: line input count
 * @fn: filename
 * @q: linked list
 * @qenv: environ
 * @his: history
 * @al : aliasi
 * @environ: enviro
 * @envch: environ changed
 * @st: return status
 * @cb: address
 * @cbt: CMDtype
 * @rf: the fd from which to read line input
 * @hisc: history count
 */
typedef struct mnm
{
	char *arg;
	char **argv;
	char *p;
	int argc;
	unsigned int lc;
	int enm;
	int lcf;
	char *fn;
	kat *q;
	kat *his;
	kat *al;
	char **environ;
	int envch;
	int st;
	char **cb;
	int cbt;
	int rf;
	int hisc;
} mnmt;
#define QIN \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}
/**
 * struct qbin - string  related fun
 * @t: flag
 * @f: function
 */

typedef struct qbin
{
	char *t;
	int (*f)(mnmt *);
} qbintable;

int hsh(mnmt *, char **);
int fbu(mnmt *);
void fc(mnmt *);
void foc(mnmt *);
int ic(mnmt *, char *);
char *dc(char *, int, int);
char *fpa(mnmt *, char *, char *);
int lhsh(char **);
void eps(char *);
int epc(char);
int pfd(char z, int f);
int psfd(char *str, int f);
int wstrlen(char *);
int wstrcmp(char *, char *);
char *sw(const char *, const char *);
char *wstrcat(char *, char *);
char *wstrcpy(char *, char *);
char *wstrdup(const char *);
void wputs(char *);
int wputchar(char);
char *wstrncpy(char *, char *, int);
char *wstrncat(char *, char *, int);
char *wstrchr(char *, char);
char **st(char *, char *);
char **stw(char *, char);
char *wmemset(char *, char, unsigned int);
void ff(char **);
void *wrealloc(void *, unsigned int, unsigned int);
int bf(void **);
int inter(mnmt *);
int isd(char, char *);
int isa(int);
int watoi(char *);
int er(char *);
void pe(mnmt *, char *);
int pd(int, int);
char *cn(long int, int, int);
void rc(char *);
int mex(mnmt *);
int mcd(mnmt *);
int mh(mnmt *);
int mhi(mnmt *);
int mal(mnmt *);
ssize_t gi(mnmt *);
int gl(mnmt *, char **, size_t *);
void sh(int);
void cin(mnmt *);
void ssn(mnmt *, char **);
void fin(mnmt *, int);
char *gen(mnmt *, const char *);
int men(mnmt *);
int msv(mnmt *);
int mus(mnmt *);
int pel(mnmt *);
char **genv(mnmt *);
int usv(mnmt *, char *);
int sv(mnmt *, char *, char *);
char *ghf(mnmt *in);
int wh(mnmt *in);
int rh(mnmt *in);
int bhl(mnmt *in, char *b, int lc);
int reh(mnmt *in);
kat *an(kat **, const char *, int);
kat *ane(kat **, const char *, int);
size_t pls(const kat *);
int dnai(kat **, unsigned int);
void fli(kat **);
size_t lle(const kat *);
char **lts(kat *);
size_t pli(const kat *);
kat *nsw(kat *, char *, char);
ssize_t gni(kat *, kat *);
int ich(mnmt *, char *, size_t *);
void chc(mnmt *, char *, size_t *, size_t, size_t);
int ral(mnmt *);
int rva(mnmt *);
int rst(char **, char *);
int uali(mnmt *in, char *str);
int sal(mnmt *in, char *str);
int pal(kat *nd);
char *dc(char *pas, int star, int sto);
char *fpa(mnmt *in, char *pas, char *cm);
ssize_t ibu(mnmt *in, char **bu, size_t *l);
ssize_t rbu(mnmt *in, char *bu, size_t *w);
#endif
