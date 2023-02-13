CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp

INCS =	Iter.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = Iter

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re