/*
 * In mathematics, the factorial of a non-negative integer n,
 * denoted by n!, is the product of all positive integers
 * less than or equal to n. For example:
 *   - 5! = 5 * 4 * 3 * 2 * 1
 * The common formula:
 *   - 0! = 1
 *   - n! = (n - 1) * n
 *
 * Implement the factorial through recursion
 */

#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

main()
{
	int n;

	printf("Please input number for factorial calculating: ");
	scanf("%d", &n);

	if (n < 0)
		printf("Please input positive number\n");
	else
		printf("The factorial of %d is: %d\n", n, factorial(n));
}
