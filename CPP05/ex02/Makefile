CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp						\
		srcs/Bureaucrat.cpp					\
		srcs/AForm.cpp						\
		srcs/PresidentialPardonForm.cpp		\
		srcs/RobotomyRequestForm.cpp		\
		srcs/ShrubberyCreationForm.cpp

INCS =	includes/Bureaucrat.hpp				\
		includes/AForm.hpp						\
		includes/PresidentialPardonForm.hpp		\
		includes/RobotomyRequestForm.hpp		\
		includes/ShrubberyCreationForm.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = Bureaucrat

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(INCS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re