#include"main.h"
/**
 * d_handler - prints decimal
 * @lists: argument to print
 * Return: integer
 */

int d_handler(va_list lists)
{
	int n = va_arg(lists, int);
	int num, last_element = n % 10, sum;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last_element < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_element = -last_element;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			sum = num / exp;
			_putchar(sum + '0');
			num = num - (sum * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last_element + '0');

	return (i);
}
