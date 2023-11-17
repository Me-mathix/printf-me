NAME = libftprintf.a

SRC = ft_printf.c

SRCB = 

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

FLAGS = -Wall -Wextra -Werror  

ARC = ar rcs

CC = cc

INCLUDE = libftprintf.h

.c.o:
		$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDE)

$(NAME): ${OBJ}
		$(ARC) $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: ${OBJB} ${OBJ}
	$(ARC) $(NAME) $(OBJB) $(OBJ)

.PHONY : all clean fclean re so bonus
