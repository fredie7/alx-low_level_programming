/**
 * void swap_int - swaps the values of two integers
 * @a: First integer nvolved in the swap
 * @b: Second integer involved in the swap
 * Return: swap integer arguments.
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
