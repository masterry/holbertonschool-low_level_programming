#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	if (l % 2 == 0)
	{
	  for (n = 0 ; n < (l / 2) ; ++n)
			_putchar(str[n]);
	} else
	{
	  for (n = 0; n <= (l / 2); ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
