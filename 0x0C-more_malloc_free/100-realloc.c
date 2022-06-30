#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *arr_1, *arr_2;
unsigned int i;
if (ptr == NULL)
{
arr_1 = malloc(new_size);
if (arr_1 == NULL)
{
return (NULL);
}
return (arr_1);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
arr_2 = ptr;
arr_1 = malloc(new_size);
if (arr_1 == NULL)
{
return (NULL);
}
for (i = 0; i < old_size; i++)
{
arr_1[i] = arr_2[i];
}
free(ptr);
return (arr_1);
}
