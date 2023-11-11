#include"main.h"

int c_handler(va_list list)
{
	char str;

	str = va_arg(list,int);
	_putchar(str);
	return(1);

}
