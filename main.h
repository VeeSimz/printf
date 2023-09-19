#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int check_string(va_list args);
int print_num(int number);
int check_digit(va_list args);

#endif
