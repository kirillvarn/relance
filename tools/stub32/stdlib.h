/* See stdio.h. */
#include <stddef.h>
void *calloc(size_t, size_t);
void *malloc(size_t);
void *realloc(void *, size_t);
void free(void *);
void abort(void);
int atexit(void (*)(void));
long strtol(const char *, char **, int);
unsigned long strtoul(const char *, char **, int);
int atoi(const char *);
char *getenv(const char *);
