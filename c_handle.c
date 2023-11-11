#include"main.h"
/**
 * c_handler - prints char
 * @str: string
 * Return: intger
*/
int c_handler(va_list list)
{
	char str;

	str = va_arg(list,int);
	_putchar(str);
	return(1);

}
