#include"main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/
int main(void)
{
  int a = 1, b = 2;
    int count = 0;

    // Print the first two Fibonacci numbers (1 and 2)
    printf("%d, %d", a, b);
    count += 2;

    // Calculate and print the remaining Fibonacci numbers
    while (count < 98) {
        int next_term = a + b;
        printf(", %d", next_term);
        count++;
        a = b;
        b = next_term;
    }
    
    printf("\n");

    return 0;
}
