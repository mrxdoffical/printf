#include "main.h"
/**
 * print_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int s_handler(va_list val)
{
	char *stri;
	int i, len;

	stri = va_arg(val, char *);
	if (stri == NULL)
	{
		stri = "(null)";
		len = _strlen(stri);
		for (i = 0; i < len; i++)
			_putchar(stri[i]);
		return (len);
	}
	else
	{
		len = _strlen(stri);
		for (i = 0; i < len; i++)
			_putchar(stri[i]);
		return (len);
	}
}
