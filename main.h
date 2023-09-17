#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/*Main Fnction*/
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int _strlen(char *s);
int _putchar(char c);
int print_37(void);
int get_size(unsigned int n ,int base );
int print_binary(va_list arg);
int print_unsigned_integer(va_list arg);
int print_oct(va_list arg);


#endif