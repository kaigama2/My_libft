#include "../includes/libft.h"

size_t ft_strlen(char *s)
{
    int i;

    i = 0;
    // check the string to the end '\0'
    while (s[i] != '\0')
        i++;
    return (i);
}
char *ft_strdup(const char *s)
{
    int i;
    char *src;
    src = (char *)s;

    i = 0;
    char *dest;
    if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
        return (NULL);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}