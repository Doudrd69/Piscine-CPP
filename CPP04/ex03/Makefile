CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/AMateria.cpp		\
		srcs/Ice.cpp			\
		srcs/Cure.cpp			\
		srcs/Character.cpp		\
		srcs/MateriaSource.cpp


INCS =	includes/AMateria.hpp		\
		includes/Ice.hpp			\
		includes/Cure.hpp			\
		includes/Character.hpp		\
		includes/ICharacter.hpp		\
		includes/IMateriaSource.hpp	\
		includes/MateriaSource.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = Materia

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(INCS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re