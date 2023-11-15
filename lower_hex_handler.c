#include"main.h"
/**
 * lower_hex_handler - to print hex
 * @num: variadic list
 * Return: counter intger
*/
int lower_hex_handler(unsigned long int num)
{
	long int i;

	long int counter = 0;

	long int *storage;

	unsigned long int temper = num;

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
		storage[i] = storage[i] + 39;
		_putchar(storage[i] + '0');

	}
	free(storage);
	return (counter);
}
