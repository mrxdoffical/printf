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

	int i;

	int b;

	int bit_mask = 1;

	unsigned int storage;

	unsigned int num = va_arg(lists, unsigned int);

	for (i = 0; i < 32 ; i++)
	{
		storage = ((bit_mask << (32 - i)) & num);
		if (storage >> (32 - i))
		sign = 1;
		if (sign)
		{
			b = storage >> (32 - i);
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
