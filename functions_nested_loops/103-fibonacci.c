#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/
int main() {
    int limit = 4000000;
    int a = 1, b = 2, next_term;
    long long sum_even = 0; // Using long long to handle large sums
    
    while (a <= limit) {
        // Check if the current term is even
        if (a % 2 == 0) {
            sum_even += a;
        }
        
        // Generate the next Fibonacci term
        next_term = a + b;
        a = b;
        b = next_term;
    }
    
    // Print the sum of even-valued terms
    printf("%lld\n", sum_even);
    
    return (0);
}
