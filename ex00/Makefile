NAME		=	ex00
SRC			=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJS		=	$(SRC:.cpp=.o)

FLAGS		=	-Wall -Wextra -Werror -std=c++98
CC			=	clang++ $(FLAGS)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
			$(CC) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:
			make clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
