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
	int i = 0, len = 0;
	int holder;

	va_start(lists, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

here:
	while (format[1] == '\0')
	{
		holder = 13;
		while (holder >= 0)
		{
			if (c[holder].id[0] == format[holder] && c[holder].id[1] == format[i + 1])
			{
				len = len + c[holder].fun(lists);
				i = +2;
				goto here;
			}
			holder--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(lists);
	return (len);
}
