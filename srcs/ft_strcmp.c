#include "../includes/libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    char *s;
    s = (char *)s1;
    char *st;
    st = (char *)s2;
    size_t i;

    i = 0;
    // comparing the n byte of both s and st character
    // n(s) && n(st)
    while ((s[i] && st[i]) && s[i] == st[i])
    {
        i++;
    }
    return (s[i] - st[i]);
}