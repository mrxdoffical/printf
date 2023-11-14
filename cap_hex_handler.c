#include"main.h"
/**
 * cap_hex_handler - to print capital_hex
 * @lists: variadic list
 * Return: counter intger
*/
int cap_hex_handler(va_list lists)
{
	int i;

	int counter = 0;

	int *storage;

	unsigned int num = va_arg(lists, unsigned int);

	unsigned int temper = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	storage = malloc(sizeof(int) * counter);
	for (i = 0; i < counter ; i++)
	{
		storage[i] = temper % 16;
		temper = temper / 16;
	}
	for (i = counter - 1 ; >= 0 ; i--)
	{
		if (storage[i] > 9)
		storage[i] = storage[i] + 7;
		_putchar(storage[i] + '0')

	}
	free(storage);
	return (counter);
}
