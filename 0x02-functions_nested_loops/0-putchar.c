#include "main.h"
#include <string.h>

/**
 * main - Entry level
 * Description: prints _putchar using putchar prototype
 *
 * Return: on success 1.
 *
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
