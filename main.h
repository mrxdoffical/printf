#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
#include<limits.h>

/**
 * struct formater - structure for functions
 * @pin: pointer to functions
 * @fun: functions
*/


typedef struct formater
{
	char *pin;
	int (*fun)();
} caller;
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
int cap_hex_handler(va_list lists);
int string_handler(va_list lists);
int upper_hex_handler(unsigned int num);
int pointer_handler(va_list lists);
int lower_hex_handler(unsigned long int num);
int reverse_printer(va_list lists);
int rot13_handler(va_list args);

#endif
