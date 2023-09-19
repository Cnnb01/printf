#include "main.h"

/**
 * _printbuff - write formatted text to a buffer
 * @buffer: the buffer to write to
 * @str: the format string
 * @args: argument list
 *
 * return: number of characters written on a buffer
 */
int _printbuff(char *buffer, const char *str, va_list args)
{
int buff_index = 0;
int count;
while (*str != '\0')
{
if (str != '%')
{
*str = buffer[buff_index];
buff_index++;
count++;
if (buff_index == 1024)
{
write (1, buffer, buff_index);
buff_index = 0;
}
}
else
{/*format specifiers here*/}
str++
}
if (buff_index > 0)
{
write (1, buffer, buff_index);
}
return (count);
                        