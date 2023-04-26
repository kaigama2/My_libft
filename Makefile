Name = libft.a
Gcc = gcc
Cflag = -Wall -Wextra -Werror
Includes = -I includes/
Off_color = \033[0m
Red = \033[31m
Green = \033[32m
Yellow = \033[33m
Blue = \033[36m

Srcs = ./srcs/
Srcs_files = ft_memset.c \
			 ft_bzero.c \
			 ft_calloc.c \
			 ft_memcpy.c \
			 ft_memccpy.c \
			 ft_memmove.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_strlen.c \
			 ft_strdup.c \
			 ft_strcpy.c \
			 ft_strncpy.c \
			 ft_strcat.c \
			 ft_strncat.c \
			 ft_strlcat.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strstr.c \
			 ft_striteri.c \
			 ft_strnstr.c \
			 ft_strcmp.c \
			 ft_strncmp.c \
			 ft_atoi.c \
			 ft_itoa.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_toupper.c \
			 ft_tolower.c \


Objs_files = ${Srcs_files:.c=.o}

Srcs_loca = ${addprefix ${Srcs}, ${Srcs_files}}
Objs_loca = ${addprefix ${Srcs}, ${Objs_files}}

all: ${Name}

${Srcs}%.o: ${Srcs}%.c
	@${Gcc} ${Cflag} ${Includes} -c $< -o $@

${Name}: ${Objs_loca}
	@echo "${Yellow} ~~ Compiling (0%)... just a sec. ${Off_color}"
	@ar rc ${Name} ${Objs_loca}
	@ranlib ${Name}
	@echo "${Yellow} finish Compiling (100%). ${Off_color}"
	@echo "${Green} ~~ Create libft_tester.c To test the library ~~ ${Off_color}"
	@${Gcc} -g ${Cflag} -o out libft_tester.c && ./out
	@echo "${Green}\t🍀Successful🍀${Off_color}" 
	@echo "\033[36m\n\t\t\t>> Author: Adikwu Kaigama <<${Off_color}"
	@echo "\033[36m\t\t\t\t     🚿￣＼ ${Off_color}"
	@echo "\033[36m\t\t\t\t    🥹    ｜ ${Off_color}"
	@echo "\033[36m\t\t\t\t   ⁣/|\💧 ｜ ${Off_color}"
	@echo "\033[36m\t\t\t\t|💧/ \   |${Off_color}"
	@echo "\033[36m\t\t\t\t ￣￣￣￣￣￣${Off_color}"

clean:
	@rm -f ${Objs_loca} out

fclean:	clean
	@rm -f ${Name}
	@echo "\033[3m \033[32m🍀Objs_files, out file and libft.a successfully removed!!!🍀${Off_color}"

re:	fclean all

.PHONY: all clean fclean re
