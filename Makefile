SRCS	= ft_isalpha.c	\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isprint.c		\
	ft_isascii.c		\
	ft_strlen.c			\
	ft_memset.c			\
	ft_bzero.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_strnstr.c		\
	ft_atoi.c			\
	ft_calloc.c			\
	ft_strdup.c			\
	ft_substr.c			\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_split.c			\
	ft_itoa.c			\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\

SRCS_BONUS = ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c		\
	ft_lstsize_bonus.c			\
	ft_lstlast_bonus.c			\
	ft_lstadd_back_bonus.c		\
	ft_lstdelone_bonus.c		\
	ft_lstclear_bonus.c			\
	ft_lstiter_bonus.c			\
	ft_lstmap_bonus.c			\
	$(SRCS)

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc

AR = ar rc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@${AR} $(NAME) $(OBJS)
	@echo "libft created !"

all: $(NAME)

clean:
	@${RM} $(OBJS)
	@echo "object (without bonus) clean!"

fclean: clean
	@${RM} $(NAME)
	@echo "libft deleted !"

re: fclean all
	@echo "libft reloaded !"

bonus: $(OBJS_BONUS)
	@${AR} ${NAME} $(OBJS_BONUS)
	@echo "libft with bonus created !"

cleanbonus:
	@${RM}  $(OBJS_BONUS)
	@echo "object and object bonus deleted !"

fcleanbonus: cleanbonus
	@${RM} $(NAME)
	@echo "libft deleted !"

rebonus : fcleanbonus bonus
	@echo "libft with bonus reloaded !"

.PHONY: all clean fclean re bonus cleanbonus fcleanbonus rebonus
