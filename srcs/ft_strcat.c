#include "../includes/libft.h"
// strcat, strncat - concatenate two strings //
// if insufficient buffer is given to the dest; this happens //
// /bin/sh: line 1: 31030 Abort trap: 6  ./out //
char *ft_strcat(char *dest, char *src)
{
    size_t i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
// int main()
// {
//     char *p;
//     char dest[10];
//     if the string overlap/greater than the memory area of dest
//     buffer overruns are a favorite avenue for attacking secure programs
//     char src[] = "Kaigama";
//     p = ft_strcat(dest, src);
//     printf("%s\n", p);
//     return (0);
// }