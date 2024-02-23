#include "main.h"
/**
 * void print_alphabet_x10 - uses _putchar function to print
 *                 the alphabet a - z 10 times
*/
void print_alphabet_x10(void)
{
int ch, line;
for (line = 0 ; line <=9 ; line++)
{
for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
_putchar('\n');
}
}
