#include <stdio.h>
/**
 *mian - prints alphabet in lowercase,
 *adds a new line
*Return: Always 0 (Success)
*/

int main(void)
{
char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
