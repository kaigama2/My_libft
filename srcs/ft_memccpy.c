#include "../includes/libft.h"

void *ft_memccpy(void *dest, void *src, int c, size_t n)
{
    char *dest1;
    dest1 = (char *)dest;
    char *src1;
    src1 = (char *)src;
    size_t i;

    i = 0;
    if (!dest || !src)
        return (NULL);
    while (i < n)
    {
        dest1[i] = src1[i];
        if (src1[i] == c)
            return (dest);
        i++;
    }
    return (NULL);
}
// int main()
// {
//     char *p;
//     char dest[10];
// if the memory area "kaig$ama" overlap dest[3], the
// result is undefined
//     char src[] = "kaig$ama";
//     p = ft_memccpy(dest, src, '$', 8);
//     printf("%s\n", p);
//     return (0);
// }