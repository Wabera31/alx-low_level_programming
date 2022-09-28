#include "main.h"

/**
 * _pow_recursion - function that return length of a string.
 * @x: integer base.
 * @y: integer power to.
 *
 * Return: Result of num1 power num2.
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
