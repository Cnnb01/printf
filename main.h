#ifndef main_h
#define main_h
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024
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
int print_binary(va_list args);
int pnumber(int dig);
int _printint( va_list args);
int (*formatter(const char *format, int *ipoint))(va_list);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
#endif /*main_h*/
