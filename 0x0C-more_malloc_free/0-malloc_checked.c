#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc
 * @b: size bytes
 *
 * Return: pointer new allocated memory
 * If fails, exit value of 98
 */
void *malloc_checked(unsigned int b)
{
double *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}
