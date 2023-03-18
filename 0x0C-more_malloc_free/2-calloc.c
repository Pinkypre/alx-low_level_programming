#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements.
 * @size: byte size of array element.
 *
 * Return: if nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
char *fill;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(size * nmemb);
if (mem == NULL)
return (NULL);
fill = mem;
for (i = 0; i < (size * nmemb); i++)
fill[i] = '\0';
return (mem);
}
