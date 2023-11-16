#include "main.h"

/**
 * bin_handler - handles unsigned integer to binary conversion
 * @lists: variadic list
 * Return: number of digits in the binary representation
 */
int bin_handler(va_list lists)
{
	int sign = 0;
	int counter = 0;
	unsigned int num = va_arg(lists, unsigned int);

	for (int i = 31; i >= 0; i--)
	{
		unsigned int bit_mask = 1 << i;
		unsigned int storage = bit_mask & num;

		if (storage)
			sign = 1;

		if (sign)
		{
			int b = storage >> i;

			_putchar(b + '0');
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
