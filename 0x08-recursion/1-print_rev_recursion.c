#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: This function recursively prints a string in reverse.
 */
void _print_rev_recursion(char *s)
{
  if (*s)
  {
    _print_rev_recursion(s + 1);
    _putchar(*s);
  }
}
