CC = c++
FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/main.cpp			\
		srcs/PhoneBook.cpp		\
		srcs/Contact.cpp

INCS =	includes/PhoneBook.hpp	\
		includes/Contact.hpp

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp $(INCS)
	$(CC) $(FLAGS) -std=c++98 -c $< -o $@

NAME = phonebook

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re