#include"main.h"
/**
 * bin_handler - handles unsignd integer to binary
 * @lists: variadic list
 * Return: intger of counter
*/

int bin_handler(va_list lists)
{
	int sign = 0;
	int counter = 0;
	int i, a = 1, b;
	unsigned int change = va_arg(lists, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & change);
		if (p >> (31 - i))
			sign = 1;
		if (sign)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}

