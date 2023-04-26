#include "../includes/libft.h"
// compares n byte/character of any of the memory area s1 or s2
int ft_memcmp(void *s1, void *s2, size_t n)
{
    char *s;
    s = (char *)s1;
    char *st;
    st = (char *)s2;
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
        // compares the n bytes of the both memory area
        while (i < n && s[i] == st[i])
        {
            i++;
        }
        return (s[i] - st[i]);
}