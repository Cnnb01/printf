#ifndef main_h
#define main_h
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
struct case_fmt
{
char ch;
int (*fun)(va_list);
};
typedef struct case_fmt fmt;
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int _printstr(const char *str);
int _printint(va_list args);
int (*formatter(const char *format, int *ipoint))(va_list);
#endif /*main_h*/
