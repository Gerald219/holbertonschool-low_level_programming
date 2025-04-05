#include "main.h"
#include <stdio.h>

/**
 * main - Tests the add function
 * Return: Always 0
 */

int main(void)
{
    printf("add(89, 9) = %d\n", add(89, 9));
    printf("add(0, 9) = %d\n", add(0, 9));
    printf("add(0, 0) = %d\n", add(0, 0));
    printf("add(89, 0) = %d\n", add(89, 0));
    printf("add(-89, 12) = %d\n", add(-89, 12));
    printf("add(12, 12) = %d\n", add(12, 12));
    printf("add(-89, -98) = %d\n", add(-89, -98));

    return (0);
}
