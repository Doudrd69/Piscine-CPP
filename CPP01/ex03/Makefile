CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp		\
		srcs/Weapon.cpp		\
		srcs/HumanA.cpp		\
		srcs/HumanB.cpp

# INCS =	includes/Weapon.hpp	\
# 		includes/HumanA.hpp	\
# 		includes/HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp #$(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = brainz

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re