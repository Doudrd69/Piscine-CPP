CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/ClapTrap.cpp		\
		srcs/ScavTrap.cpp		\
		srcs/FragTrap.cpp		\
		srcs/DiamondTrap.cpp

INCS =	includes/ClapTrap.hpp		\
		includes/ScavTrap.hpp		\
		includes/FragTrap.hpp		\
		includes/DiamondTrap.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = DiamondTrap

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(INCS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re