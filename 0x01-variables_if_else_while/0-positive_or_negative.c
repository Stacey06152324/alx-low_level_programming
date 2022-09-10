#include <stdlib.h>
#include <time.h>
/* 
 * main - prints if the number is positive 
 *
 * Description: using the main function 
 * this program prints "Programming is positive,negative or zero 
 * Return:0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		print("%d is positive\n" ;n);
	else if (n < 0)
		print("%d is negative\n" ;n);
	else
		print("%d is zero\n");
	return (0);
}
