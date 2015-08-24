/*
 * 
 */

#include <stdio.h>

/* GCD: greatest common divisor */
int gcd(int m, int n)
{
	if (n == 0)
		return m;

	return gcd(n, m % n);
}

main()
{
	int i = 12, j = 8;

	printf("gcd of 12 and 8 is: %d\n", gcd(12, 8));
}
