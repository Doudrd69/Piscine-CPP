CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp		\
		srcs/Account.cpp

INCS =	includes/Account.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = test

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re