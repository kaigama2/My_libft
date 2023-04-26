#include "../includes/libft.h"
// The memset function fills the first n bytes of the memory
// memory area pointed to by s with constant byte c
void *ft_memset(void *s, int c, size_t n)
{
    char *s1;
    s1 = (char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        // filling the first n bytes of the memory area with the constant c
        s1[i] = c;
        i++;
    }
    // return a pointer to the memory area
    return (s);
}