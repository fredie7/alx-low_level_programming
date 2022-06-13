/**
 * void swap_int - swaps the values of two integers
 * Description: Swaps the values of two integers
 * @a: First integer nvolved in the swap
 * @b: Second integer involved in the swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
