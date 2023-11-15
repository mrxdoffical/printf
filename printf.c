#include"main.h"
/**
 * _printf - a function that are simmilar to the real one
 * @format: variadic lists
 * Return: len
*/

int _printf(const char *format, ...)
{
	caller c[] = {
		{"%c", c_handler}, {"%s", s_handler}, {"%%", handler_37}
		, {"%d", d_handler}, {"%i", i_handler}, {"%r", reverse_printer}
		, {"%R", rot13_handler}, {"%b", bin_handler}, {"%u", u_handler}
		, {"%o", octal_handler}, {"%x", hex_handler}, {"%X", cap_hex_handler}
		, {"%S", string_handler}, {"%p", pointer_handler}
	};
	va_list lists;
	int i = 0, j, cout = 0;

	va_start(lists, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].pin[0] == format[i] && p[j].pin[1] == format[i + 1])
			{
				cout += p[j].function(lists);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		cout++;
		i++;
	}
	va_end(lists);
	return (cout);
}
