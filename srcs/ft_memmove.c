#include "../includes/libft.h"
// memmove - copy memory area //
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char *s;
    s = (char *)src;
    char *dst;;
    dst = (char *)dest;

    i = 0;
    // if dst overlaps s
    if (dst > s)
    {
        // copying s n byte/ character into dst
        while (i < n)
        {
            dst[i] = s[i];
            i++;
        }
    }
    // if the n byte of s overlap dst
    else if (s > dst)
    {
        while (i < n)
        {
            dst[i] = s[i];
            i++;
        }
    }
    return (dest);
}