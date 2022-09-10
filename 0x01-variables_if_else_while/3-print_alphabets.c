#include <stdlib.h>
#include <time.h>
/** 
 * main - prints the letters of the alphabet 
 *
 * Description: prints the letter of the alphabet
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char ch;
	for (ch = 'a' ;ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ;ch <= 'Z' ; ch++)
	{
		putchar(ch)
	}
	putchar('\n');
	return (0);
}
