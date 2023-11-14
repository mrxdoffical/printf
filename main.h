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
int _strlen(char *s);
int _strlenc(const char *s);
int handler_37(void);
int i_handler(va_list args);
int d_handler(va_list lists);
int bin_handler(va_list lists);
int u_handler(va_list lists);
int octal_handler(va_list lists);
int hex_handler(va_list lists);
int cap_hex_handler(va_list lists)
#endif
