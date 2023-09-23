#include "main.h"
/**
 * print_unsigned - Print an unsigned integer
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[20];
int len = sprintf(buffer, "%u", num);
int written_char = write(1, buffer, len);
if (written_char < 0)
return (-1);
return (written_char);
}
/**
 * print_octal - Print an octal integer
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[20];
int len = sprintf(buffer, "%o", num);
int written_char = write(1, buffer, len);
if (written_char < 0)
return (-1);
return (written_char);
}
/**
 * print_hex_lower - Print a lowercase hexadecimal integer
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_hex_lower(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[20];
int len = sprintf(buffer, "%x", num);
int written_char = write(1, buffer, len);
if (written_char < 0)
return (-1);
return (written_char);
}
/**
 * print_hex_upper - Print an uppercase hexadecimal integer
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[20];
int len = sprintf(buffer, "%X", num);
int written_char = write(1, buffer, len);
if (written_char < 0)
return (-1);
return (written_char);
}
