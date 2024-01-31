#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <starg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printc(va_list let);
int prints(va_list let);
int _strlen(char *s)
int _strlenc(const char *s)
int print_37(void);
#endif
