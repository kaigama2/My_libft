#include "../includes/libft.h"
#include "ft_strlen.c"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    char *s;
    s = (char *)src;
    size_t l_dst;
    size_t l_src;
    size_t result;

    i = 0;
    l_dst = ft_strlen(dest);
    l_src = ft_strlen(s);
    if (size > l_dst)
        result = l_src + l_dst;
    else
        result = l_src + size;
    // providing space for null terminator in dest here at the size comparism
    while (s[i] && (l_dst + 1) < size)
    {
        dest[l_dst++] = s[i++];
    }
    // here is what the function is known for null terminating dest string
    dest[l_dst] = '\0';
    return (result);
}