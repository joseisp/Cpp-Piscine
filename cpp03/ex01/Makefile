.PHONY = clean fclean re all

NAME 	= scav
CFLAGS 	= -std=c++98 -Wall -Wextra -Werror
SRC		= ClapTrap.cpp ScavTrap.cpp main.cpp
HEADER 	= ClapTrap.hpp ScavTrap.hpp
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
