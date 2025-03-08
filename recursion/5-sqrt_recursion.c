#include "main.h"

/**
 * find_sqrt - Helper function to find square root.
 * @n: The number to find the square root of.
 * @guess: The current number being tested as a square root.
 *
 * Return: The natura square root, or -1 if none exists.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n) return (-1);
	if (guess * guess == n) return (guess);
	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: The number to find the square rot of.
 *
 * Return: The natural square root, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	return (n < 0 ? -1 : find_sqrt(n, 0));
}
