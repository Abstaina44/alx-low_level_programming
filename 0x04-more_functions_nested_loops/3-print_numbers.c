#include <stdio.h>
#include "main.h"

/**
*print_numbers - function that prints all numbers from 0 to 9
*Return: Always 0
*/
	void print_numbers(void)
{

	int n;

	for (n = 48; n < 58; n++)
	{
	putchar(n);
	putchar('\n');
}

