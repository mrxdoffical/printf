#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int c_handler(va_list list);
int s_handler(va_list val);
#endif