.PHONY = clean fclean re all

NAME 	:= a.out
CFLAGS 	:= -std=c++98 -Wall -Wextra -Werror
SRC		:= Account.cpp tests.cpp
HEADER 	:= Account.hpp
CC		:= c++
OBJ		:= $(SRC:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		  $(CC)	$(CFLAGS) $(OBJ) $(HEADER) -o $(NAME)

.cpp.o	:
		  $(CC) $(CFLAGS) -c $<

clean	:
		  rm -f $(OBJ)

fclean	: clean
		  rm -f $(NAME)

re		: fclean all