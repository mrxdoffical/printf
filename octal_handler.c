#include"main.h"
/**
 * octal_handler - to print octal
 * @lists: variadic list
 * Return: counter intger
*/
int octal_handler(va_list lists)
{
	int i;

	int counter = 0;

	int *storage;

	unsigned int num = va_arg(lists, unsigned int);

	unsigned int temper = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	storage = malloc(sizeof(int) * counter);
	for (i = 0; i < counter ; i++)
	{
		storage[i] = temper % 8;
		temper = temper / 8;
	}
	for (i = counter - 1 ; >= 0 ; i--)
	{
		_putchar(storage[i] + '0')
	}
	free(storage);
	return (counter);
}

