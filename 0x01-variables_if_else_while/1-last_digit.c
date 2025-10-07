#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Checks the last digit of a random number and states
 *  whether it's greater than 5, 0 or less than 6
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	int n;
	int lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;

	if (lst_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	else if (lst_dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);

	return (0);
}
