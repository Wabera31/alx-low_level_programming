#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this gets the program to run
 * Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int num;

num = 0;

while (num < 10)
{
	printf("%d", num);
	num++;
}
	putchar('\n');

	return (0);
}
