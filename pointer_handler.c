#include"main.h"
/**
 * print_pointers - handle pointers
 * @count: variadic lists
*/

void print_pointers(int count, ...)
{
	va_list args;

	va_start(args, count);


	for (int i = 0; i < count; ++i)
	{
		void *ptr = va_arg(args, void *);

		printf("%p\n", ptr);
	}

	va_end(args);
}
