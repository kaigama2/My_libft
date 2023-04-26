#include "../includes/libft.h"
// DESCRIPTION
// The itoa() function constructs a string representation of
// an integer.
int ft_count_number(int nbr)
{
    int count_n;
    count_n = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        count_n++;
    }
    while (nbr > 0)
    {
        nbr = nbr / 10;
        count_n++;
    }
    return (count_n);
}
char *ft_itoa(int n)
{
    char *str;
    long num_count;
    int total_num;
    num_count = n;
    total_num = ft_count_number(num_count);
    if (!(str = (char *)malloc(sizeof(char *) * (total_num + 1))))
        return (0);
    str[total_num--] = '\0';
    if (num_count == 0)
    {
        str[0] = 48;
        return (str);
    }
    else if (num_count < 0)
    {
        str[0] = '-';
        num_count *= -1;
    }
    while (num_count > 0)
    {
        str[total_num] = 48 + (num_count % 10);
        num_count /= 10;
        total_num--;
    }
    return (str);
}