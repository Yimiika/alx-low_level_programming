/**
 * swap_int - swaps the values of two integers
 * @a: integer in function
 * @b: integer in function
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
*a = *a - *b;
*b = *a + *b;
*a = *b - *a;
}
