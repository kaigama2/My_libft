#include "../includes/libft.h"
// strchr, strrchr, strchrnul - locate character in string //

char *ft_strchr(const char *s, int c)
{
    char *s1;
    s1 = (char *)s;
    size_t i;

    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == c)
            return (s1);
        i++;
    }
    return (NULL);
}