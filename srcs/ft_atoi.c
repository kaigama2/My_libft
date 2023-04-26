#include "../includes/libft.h"
// DESCRIPTION
// Converts a string representing an integer to an integer.
// The string to be converted consists of optional
//leading white space, an optional sign and a series of 
// contiguous digits.

int ft_atoi(char *str)
{
    int i;
    int result;
    int negative;

    i = 0;
    result = 0;
    negative = 1;
    while (str[i] == '\t' || str[i] == '\f' || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            negative *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * negative);
}