#include "main.h"

**/
  *print_rev - functions that prints a string in reverse
  *@str: This is my first entry
  */
  
void print_rev(char *s)
{
  char str[40]; // declare the size of character string.
  printf (" \n Enter a string to be reversed: ");
  scanf ("%s", str);
// use strrev() function to reverse a string.
