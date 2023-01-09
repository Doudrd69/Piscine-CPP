CC =	c++
FLAGS =	-Wall -Wextra -Werror

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

%.o : %.c $(CC) $(FLAGS) -cpp $< -o $@

NAME =	megaphone

all :	$(NAME)

$(NAME) = $(CC) $(FLAGS) -std=c++98 -o $(NAME)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re