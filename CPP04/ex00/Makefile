CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/Animal.cpp			\
		srcs/Dog.cpp			\
		srcs/Cat.cpp			\
		srcs/WrongCat.cpp		\
		srcs/WrongAnimal.cpp

INCS =	includes/Animal.hpp			\
		includes/Dog.hpp			\
		includes/Cat.hpp			\
		includes/WrongCat.hpp		\
		includes/WrongAnimal.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = Animal

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(INCS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re