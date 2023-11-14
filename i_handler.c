#include "main.h"
/**
 * i_handler - prints integer
 * @lists: argument to print
 * Return: integer
 */
int i_handler(va_list lists)
{
	int n = va_arg(lists, int);
	int num, last_elment = n % 10, sum, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last_elment < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_elment = -last_elment;
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
	_putchar(last_elment + '0');

	return (i);
}
