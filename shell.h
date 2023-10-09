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

extern char **qen;

/**
 * struct ka - linked list
 * @n: the number field
 * @str: a string
 * @x: points to the next node
 */
typedef struct ka
{
	int n;
	char *str;
	struct liststr *x;
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
 * @env: linked list
 * @environ: environ
 * @his: history
 * @al : alias
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
	list_t *env;
	list_t *his;
	list_t *al;
	char **environ;
	int envch;
	int st;
	char **cb;
	int cbt;
	int rf;
	int hisc;
} mnmt;
#define QIN {NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
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

int hsh(info_t *, char **);
int fbu(info_t *);
void fc(info_t *);
void foc(info_t *);
int ic(info_t *, char *);
char *dc(char *, int, int);
int *fp(info_t *, char *, char *);
int lhsh(char **);
void eps(char *);
void epc(char);
int pfd(char z, int f);
int psfd(char *str, int f);
int _strlen(char *);
int _strcmp(char *, char *);
char *sw(const char *, const char *);
char *_strcat(char *, char *);
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);
char **st(char *, char *);
char **stw(char *, char);
char *_memset(char *, char, unsigned int);
void ff(char **);
void *_realloc(void *, unsigned int, unsigned int);
int bf(void **);
int in(info_t *);
int isd(char, char *);
int isa(int);
int _atoi(char *);
int er(char *);
void pe(info_t *, char *);
int pd(int, int);
char *cn(long int, int, int);
void rc(char *);
int mex(info_t *);
int mcd(info_t *);
int mh(info_t *);
int mhi(info_t *);
int mal(info_t *);
ssize_t gi(info_t *);
int gl(info_t *, char **, size_t *);
void sh(int);
void cin(info_t *);
void ssn(info_t *, char **);
void fin(info_t *, int);
char *gen(info_t *, const char *);
int men(info_t *);
int msv(info_t *);
int mus(info_t *);
int pel(info_t *);
char **genv(info_t *);
int usv(info_t *, char *);
int sv(info_t *, char *, char *);
char *ghf(info_t *in);
int wh(info_t *in);
int rh(info_t *in);
int bhl(info_t *i, char *b, int lc);
int reh(info_t *in);
list_t *an(list_t **, const char *, int);
list_t *ane(list_t **, const char *, int);
size_t pls(const list_t *);
int dnai(list_t **, unsigned int);
void fli(list_t **);
size_t lle(const list_t *);
char **lts(list_t *);
size_t pli(const list_t *);
list_t *nsw(list_t *, char *, char);
ssize_t gni(list_t *, list_t *);
int ich(info_t *, char *, size_t *);
void chc(info_t *, char *, size_t *, size_t, size_t);
int ral(info_t *);
int rva(info_t *);
int rst(char **, char *);

#endif
