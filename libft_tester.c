#include "./includes/libft.h"
#include "./srcs/ft_strdup.c"

int main()
{
    char *point;
    char src[] = "Kaigama";
    point = ft_strdup(src);
    printf("%s\n", point);
    free(point);
    return (0);
}