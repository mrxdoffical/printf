#include"main.h"
/**
 * reverse_printer - reverses the input
 * @lists: variadic list
 * Return: counter
*/

int reverse_printer(va_list lists)
{
	char *string = va_arg(lists, char*);
	int ctr;
	int ctl = 0;

	if (string == NULL)
	string = ("(null)");
	while (string[ctl] != '\0')
	ctl++;
	for (ctr = ctl - 1; ctr >= 0; ctr--)
	_putchar(string[ctr]);
	return (ctl);
}
