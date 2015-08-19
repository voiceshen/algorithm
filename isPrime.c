/*
 * This program is use to check the input number is prime or not.
 *
 * Compile this program with following command:
 *   $ gcc -o isPrime isPrime.c -lm
 */

#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
	int i;

	if (number > 1) {
		/* TODO:
		 * check is there any better method to get rid of sqrt
		 */
		for (i = 2; i <= sqrt(number); i++) {
			if (number % i == 0)
				return 0;
		}
	}

	return -1;
}

main()
{
	int i;

	printf("Please enter the number for prime checking: ");
	scanf("%d", &i);
	/* Check the input is natural number or not.*/

	if (isPrime(i))
		printf("It is a prime\n");
	else
		printf("It is not a prime\n");

}
