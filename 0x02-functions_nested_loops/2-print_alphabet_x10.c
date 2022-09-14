#include"main.h"

/**
 * main - This will print the alphabet
 *
 * Return: Always 0.
 */

int main(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n')
	}
}
