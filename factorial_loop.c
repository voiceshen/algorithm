/*
 * In mathematics, the factorial of a non-negative integer n,
 * denoted by n!, is the product of all positive integers
 * less than or equal to n. For example:
 *   - 5! = 5 * 4 * 3 * 2 * 1
 * The common formula:
 *   - 0! = 1
 *   - n! = (n - 1) * n
 *
 * Implement the factorial through loop
 */

#include <stdio.h>

main()
{
	int t, i, n;

	printf("Please input number for factorial calculating: ");
	scanf("%d", &n);

	/* Sanity check */
	if (n < 0) {
		printf("Please input positive number\n");
		return;
	}

	if (n == 0) {
		t = 1;
	} else {
		for (t = 1, i = 1; i <= n; i++)
			t *= i;
	}

	printf("The factorial of %d is: %d\n", n, t);
}
