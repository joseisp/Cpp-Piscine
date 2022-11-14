.PHONY = clean fclean re all

NAME 	= easyfind
CFLAGS 	= -std=c++98 -Wall -Wextra -Werror
SRC		= main.cpp
HEADER 	= easyfind.hpp
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
