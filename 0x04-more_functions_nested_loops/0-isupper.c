#include <unistd.h>
#include <ctype.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
*/
<<<<<<< HEAD

int isupper(int c)
{
	if (c >='A' && c <= 'Z')

		return (1);
        else 
=======
int _isupper(int c)
{
	if (c >='A' && c <= 'Z')
		return (1);
	else 
>>>>>>> 971f39a35e9ad06914b51c466c06a1ebaf4515d5
		return (0);
}
