#include <stdio.h>
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int i;
char h;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (h = 'a'; h <= 'f'; h++)
putchar(h);
putchar('\n');
return (0);
}
