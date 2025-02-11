SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCSBNS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstclear.c

OBJS		= ${SRCS:.c=.o}

OBJSBNS		= ${SRCSBNS:.c=.o}

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

%.o:		%.c
			${CC} ${CFLAGS}  -o $@ -c $<

${NAME}:	${OBJS}
			ar rcs ${NAME} $?

${OBJS}:	libft.h

${OBJSBNS}:	libft.h

bonus:		${OBJS} ${OBJSBNS}
			ar rcs ${NAME} ${OBJS} ${OBJSBNS}

clean:
			rm -f *.o

fclean:		clean
			rm -f ${NAME}

re:			fclean all
