#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to be checked
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
  if (n < 0)
    return (-n);
  else
    return (n);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int r;

  r = _abs(-1);
  printf("%d\n", r);
  r = _abs(0);
  printf("%d\n", r);
  r = _abs(1);
  printf("%d\n", r);
  return (0);
}
