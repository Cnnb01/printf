#include "main.h"

/**
 * _printint - Print out a number.
 * @args: A va_list containing the integer to be printed.
 * Return: The number of characters printed.
 */
int _printint(va_list args)
{
    char buffer[10];
    int i = 0;
    int n = va_arg(args, int); 
    int count = 0;

    if (n < 0)
    {
        putchar('-');
        count++;
        n = -n;
    }

    if (n == 0)
    {
        putchar('0'); 
        return (1); 
    }

    
    while (n > 0)
    {
        buffer[i] = (n % 10) + '0'; 
        n /= 10;
        i++;
    }

   
    while (i > 0)
    {
        i--;
        putchar(buffer[i]);
        count++;
    }

    return (count);
}

