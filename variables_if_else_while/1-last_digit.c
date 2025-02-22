#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigns a random number, identifies the last digit and verifies the
 * clasification.
 *
 * Description: This program displays the last digit of n, then verifies if
 * this digit is greater than 5, 0 , less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
