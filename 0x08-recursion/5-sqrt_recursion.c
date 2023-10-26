#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: this is the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this recurses to find the natural sq. root of a no.
 * @n: the number to calculate the square root of
 * @i: iterator
 * Return: this is the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
