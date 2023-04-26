#include "../includes/libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        // function f to apply to each character of the string
        // pass the string index as the first argument
        f(i, &s[i]);
        i++;
    }
}