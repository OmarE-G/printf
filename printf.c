#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to print a string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, num;
    char ch ;
            
	if (format == NULL)
		return (-1);

	va_start(arg, format);

	num = 0;

	for (i = 0; format[i] != '\0'; i++)
	{   
        
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num++;
		}
        else
        {
            i++;
         ch = format[i];   
            if ((ch == 'i' || ch == 'd'))
                num += print_int(arg);
            else if (ch == 's')
                num += print_string(arg);
            else if (ch == 'c')
                num += print_char(arg);
            else if (ch == '%')
                num += print_37();
			else if (ch == 'u')
                num += print_unsigned_integer(arg);
            else if (ch == 'b')
                num += print_binary(arg);
			else if (ch == 'o')
                num += print_oct(arg);
        }   
       
	}

	va_end(arg);
	return (num);
}