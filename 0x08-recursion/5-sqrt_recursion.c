#include "main.h"
#include <stdio.h>

/**
 * root_square - Returns the natural square root of a number
 * otherwise return 0.
 *
 * @n: result to find.
 * @num: number multiply by itself giving the result.
 * Return: Root square of the number.
 *
 */

int root_square(int num, int n)
{
	/*Base case*/
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num > n)
	{
		return (-1);
	}
	else
	{
		num++;
	}
	return (root_square(num, n));
}
