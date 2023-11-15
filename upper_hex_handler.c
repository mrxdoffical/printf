#include"main.h"
/**
 * upper_hex_handler - to print capital_hex
 * @num: variadic list
 * Return: counter intger
*/
int upper_hex_handler(unsigned int num)
{
	int i;

	int counter = 0;

	int *storage;

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
	for (i = counter - 1 ; i >= 0 ; i--)
	{
		if (storage[i] > 9)
		storage[i] = storage[i] + 7;
		_putchar(storage[i] + '0');

	}
	free(storage);
	return (counter);
}
