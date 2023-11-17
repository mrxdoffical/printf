#include"main.h"
/**
 * pointer_handler - handle pointers
 * @lists: variadic lists
 * Return: returns placeholders
*/

void print_pointers(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        void *ptr = va_arg(args, void *);
        printf("%p\n", ptr);
    }

    va_end(args);
}
