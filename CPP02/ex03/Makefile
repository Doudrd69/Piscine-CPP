CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp		\
		srcs/Fixed.cpp		\
		srcs/Point.cpp		\
		srcs/bsp.cpp

INCS =	includes/Fixed.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = bsp

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -I $(INCS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re