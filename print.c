#include <stdio.h>
#include <stdlib.h>

int checkamp(char *format, va_list args)
{
    va_start(args, sizeof(args));
    if ((format) == 'c')
    {
        char cr = va_arg(args, char);
        putchar(cr);
        return (0);
    }
    else if (format == 's')
    {
        int count = 0;
        while (args = '\0')
        {
            char cr = va_arg(args, char);
            putchar(cr);
            count ++;
            return (0);
        }
    }
    else if (format == '%')
    {
        putchar('%');
        return (0);
    }
    else
        return -1;
}
