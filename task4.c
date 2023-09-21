#include "main.h"

/**
* _printbuff - write formatted text to a buffer
* @buffer: the buffer to write to
* @str: the format string
* @args: argument list
* Return: number of characters written on a buffer
*/
int _printbuff(char *buffer, const char *str, va_list args)
{
int buff_index = 0;
int count = 0;
while (*str != '\0')
{
if (*str != '%')
{
buffer[buff_index] = *str;
buff_index++;
if (buff_index == 1024)
{
write(1, buffer, buff_index);
buff_index = 0;
}
}
else
{
str++;
switch (*str)
{
case 's':
count += print_string(args);
break;
case 'd':
case 'i':
count += _printint(args);
break;
case 'c':
count += print_char(args);
break;
case '%':
count += print_percent(args);
break;
case 'b':
count += print_binary(args);
break;
default:
putchar('%');
putchar(*str);
count += 2;
break;
}
}
str++;
}
if (buff_index > 0)
{
write(1, buffer, buff_index);
}
return (count);
}

