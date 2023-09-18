#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

/*Main Fnction*/
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int _strlen(char *s);
int _putchar(char c);
int get_size(unsigned long int n, unsigned long base);
int print_binary(va_list arg);
int print_unsigned_integer(va_list arg);
int print_oct(va_list arg);
int printer(char ch, va_list arg);
int p_unknown(char ch);
int print_hexa(va_list arg, char c);

#endif
