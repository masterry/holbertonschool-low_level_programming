#include "main.h"
/**
 *  print_alphabet uses _putchar function to print alphabet
 *
 *  Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
_putchar('\n');
}
