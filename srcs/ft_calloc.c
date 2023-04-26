#include "../includes/libft.h"
#include "ft_bzero.c"
// The calloc function allocates memory for an array of nmemb
// and elements of size bytes each and returns a pointer to the
// allocated memory. The memory is set to zero
void *ft_calloc(size_t nmemb, size_t size)
{
    void *array;
    // allocates an array by nmemb * size
    if (!(array = (void *)malloc(sizeof(void) * (nmemb * size))))
        return (NULL);
    size_t i;
    i = 0;
    char *p;
    p = (char *)array;

    while (i < (nmemb * size))
    {
        p[i] = '\0';
        i++;
    }
    return (array);
}