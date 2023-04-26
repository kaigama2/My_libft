#include "../includes/libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'Z'))
        return (1);
    else
        return (0);
}