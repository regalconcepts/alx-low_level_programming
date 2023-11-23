#include "main.h"

/**
 * _pow - this function calculates (base ^ power)
 * @base: the base of the exponent.
 * @power: the power of the exponent.
 *
 * Return: value of (base ^ power).
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - this prints a no. in binary notation.
 * @n: the no. to print.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
