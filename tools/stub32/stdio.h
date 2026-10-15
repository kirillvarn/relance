/* Minimal libc stand-ins for `make check32`: lets ported code compile with
 * -m32 -ffreestanding (no i386 libc installed) so its _Static_asserts on
 * original 32-bit layouts are checked. Declarations only; never linked. */
#include <stdarg.h>
#include <stddef.h>
typedef struct FILE FILE;
int snprintf(char *, size_t, const char *, ...);
int vsnprintf(char *, size_t, const char *, va_list);
int sprintf(char *, const char *, ...);
int fprintf(FILE *, const char *, ...);
FILE *fopen(const char *, const char *);
int fclose(FILE *);
size_t fread(void *, size_t, size_t, FILE *);
extern FILE *stderr;
#define SEEK_SET 0
#define SEEK_END 2
int fseek(FILE *, long, int);
long ftell(FILE *);
