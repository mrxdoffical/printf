#include"main.h"

/**
 * string_handler - a function that handles strings
 * @lists: variadic list that holds the string
 * Return: length of the string after handling
 */
int string_handler(va_list lists)
{
	char *string;
	int len = 0;
	int value;

	string = va_arg(lists, char *);
	if (string == NULL)
		string = "(NULL)";

	for (; *string != '\0'; string++)
	{
		if (*string < 32 || *string >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			value = *string;
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len += upper_hex_handler(value);
		}
		else
		{
			_putchar(*string);
			len++;
		}
	}

	return (len);
}
