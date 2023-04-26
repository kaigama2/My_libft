#include "../includes/libft.h"

char *ft_strcpy(char *restrict dest, const char *src)
{
    size_t i;

    i = 0;
    // check the string to the end
    while (src[i] != '\0')
    {
        // copy n byte/character of src into dest
        dest[i] = src[i];
        i++;
    }
    //put '\0' in dest as well
    dest[i] = '\0';
    return (dest);
}
// int main()
// {
//     char *p;
//     the destination string must be large enough to receive the copy
//     char dest[10];
//     the string should not overlap
//     char src[] = "Kaigama";
//     p = ft_strcpy(dest, src);
//     printf("%s\n", p);
//     return (0);
// }