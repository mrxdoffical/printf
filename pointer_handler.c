#include"main.h"
/**
 * pointer_handler - handle pointers
 * @lists: variadic lists
 * Return: returns placeholders
*/

int pointer_handler(va_list lists)
{
	void *ptr;
	char *string = "(nil)";
	long int a;
	int i;
	int placeholder;

	ptr = va_arg(lists, void *);
	if (ptr == NULL)
	{
		for (i = 0 ; string[i] ; i++)
		{
			_putchar(string[i]);
			return (i);
		}
	}
	a =  (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	placeholder = lower_hex_handler(a);
	return (placeholder + 2);
}
