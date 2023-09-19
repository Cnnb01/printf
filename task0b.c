#include "main.h"
#include <string.h>
/**
 * print_char - Print a character.
 * @args: The arguments list.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
char a = va_arg(args, int);
return (write(1, &a, 1));
}
/**
 * print_string - Print a string.
 * @args: The arguments list.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
char *s = va_arg(args, char *);
return (write(1, s, strlen(s)));
}
/**
 * print_percent - Print a percent character.
 * @args: The arguments list.
 *
 * Return: The number of characters printed.
 */
int print_percent(va_list agrs)
{
(void) agrs;
return (write(1, "%%", 1));}
