#include <stdio.h>
#include "main.h"

/**
 *main - start of execution
 *Prints the alphabet in lowercase, followed by a new line
 *Return: zero
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
