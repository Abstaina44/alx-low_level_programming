#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
    /* handle negative numbers */
    	if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /* print the digits */
    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

