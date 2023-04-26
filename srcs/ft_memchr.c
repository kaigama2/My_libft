#include "../includes/libft.h"
// search for c (unsigned char) or constant in n byte/character of s
void *ft_memchr(void *s, int c, size_t n)
{
    char *s1;
    s1 = (char *)s;

    size_t i;
    i = 0;
    while (i < n)
    {
        if (s1[i] == c)
            return (s);
        i++;
    }
    return (NULL);
}