NAME		=	ex03
SRC			=	main.cpp \
				AMateria.cpp \
				Ice.cpp \
				Cure.cpp \
				Character.cpp \
				MateriaSource.cpp

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
