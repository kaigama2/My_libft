#include "../includes/libft.h"
// The bzero function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zero(bytes
// containing '\0') to that memory area.//
void ft_bzero(void *s, size_t n)
{
    char *s1;
    s1 = (char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
}