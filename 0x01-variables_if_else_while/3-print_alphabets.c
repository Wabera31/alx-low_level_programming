#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this gets the program to start running
 * Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int alphabet, ALPHABET;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
