.PHONY = clean fclean re all

NAME 	= animal
CFLAGS 	= -std=c++98 -Wall -Wextra -Werror
SRC		= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
HEADER 	= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
CC		= c++
OBJ		= $(SRC:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		  $(CC)	$(CFLAGS) $(OBJ) $(HEADER)
		  mv a.out $(NAME)
		  rm -f *gch

clean	:
		  rm -f $(OBJ)

fclean	: clean
		  rm -f $(NAME)

re		: fclean all
