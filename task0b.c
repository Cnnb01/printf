#include "main.h"

/**
 * _printstr - Print a string and return its length.
 * @str: The string to print.
 *
 * Return: The length of the string.
 */
int _printstr(const char *str)
{
int count = 0;
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}
return (write(1, str, count));
}
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
return (_printstr(s));
}
/**
 * print_percent - Print a percent character.
 * @args: The arguments list.
 *
 * Return: The number of characters printed.
 */
int print_percent(va_list args)
{
(void)args;
return (write(1, "%%", 1));

}
