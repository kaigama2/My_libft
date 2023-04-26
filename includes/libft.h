#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

typedef struct s_point
{
    int x;
    char *buffer;
}	            t_point;

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, size_t n);
char *ft_strdup(const char *s);
int ft_atoi(char *str);
char *ft_itoa(int n);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strcpy(char *restrict dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
size_t ft_strlen(char *s);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int islower(int c);
int ft_isupper(int c);

#endif