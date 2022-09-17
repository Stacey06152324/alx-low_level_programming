#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
*/
int _isupper(int c)
{
	if (c >='A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
