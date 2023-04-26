#include "../includes/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *dst;
    dst = (char *)dest;
    char *str;
    str = (char *)src;

    i = 0;
    while (i < n)
    {
        // copies n byte from src to memory area dest;
        dst[i] = str[i];
        i++;
    }
    return (dest);
}