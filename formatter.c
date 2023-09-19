#include "main.h"
/**
*
*
*/
int (*formatter(const char *format, int *ipoint))(va_list)
{
int i = 0;
fmt form[]= {
        {'c', print_char}, {'s', print_string}, {'%', print_percent},
        {'d', _printint}, {'i', _printint},
        {'\0', NULL}
};
while (form[i].ch != '\0')
{
if (form[i].ch == format[*ipoint])
{
return (form[i].fun);
}
/**else
{
write(1, "error", 5);
}*/
i++;
}
return (NULL);
}
