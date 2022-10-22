.PHONY = clean fclean re all

NAME 	= Harl
CFLAGS 	= -std=c++98 -Wall -Wextra -Werror
SRC		= Harl.cpp main.cpp
HEADER 	= Harl.hpp
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
