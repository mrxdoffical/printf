#include "main.h"
/**
 * rot13_handler - convert to rot13
 * @args: printf arguments
 * Return: ctr
 *
 */
int rot13_handler(va_list args)
{
	int i, j, ctr = 0;
	int l = 0;
	char *string = va_arg(args, char*);
	char char1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char char2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		l = 0;
		for (j = 0; char1[j] && !l; j++)
		{
			if (string[i] == char1[j])
			{
				_putchar(char2[j]);
				ctr++;
				l = 1;
			}
		}
		if (!l)
		{
			_putchar(string[i]);
			ctr++;
		}
	}
	return (ctr);
}
