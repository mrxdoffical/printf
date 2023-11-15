#include"main.h"

/**
 * string_handler - an function that can handle strings
 * @lists: variadic list holds int
 * Return: len
*/
int string_handler(va_list lists)
{
	char *string;
	int i, len = 0;
	int value;

	string = va_arg(lists, char *);
	if (string == NULL)
	{
		string = "(NULL)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[1] < 32 || string[i] >= 127)
			{
				_putchar('\\');
				_putchar('x');
				len = len + 2;
				value = string[i];
				if (value < 16)
				{
					_putchar('0');
					len++;
				}
				len = len + upper_hex_handler(value);
			}
		else
		{
			_putchar(string[i]);
			len++;
		}
	}
	return (len);
}
