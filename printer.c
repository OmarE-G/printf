#include "main.h"

/**
 * printer - prints a char.
 * @ch: arguments.
 * @arg: arguments.
 * Return: 1.
*/
int printer(char ch, va_list arg)
{
	int num = 0;

	if ((ch == 'i' || ch == 'd'))
		num = print_int(arg);
	else if (ch == 's')
		num = print_string(arg);
	else if (ch == 'c')
		num = print_char(arg);
	else if (ch == '%')
		num = print_37();
	else if (ch == 'u')
		num = print_unsigned_integer(arg);
	else if (ch == 'b')
		num = print_binary(arg);
	else if (ch == 'o')
		num = print_oct(arg);
	else 
	        num = p_unknown(ch);

	return (num);
}
