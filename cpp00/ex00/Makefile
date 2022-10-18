.PHONY = clean fclean re all

NAME 	:= megaphone
CFLAGS 	:= -std=c++98 -Wall -Wextra -Werror
SRC		:= megaphone.cpp
CC		:= c++
OBJ		:= $(SRC:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		  $(CC)	$(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o	:
		  $(CC) $(CFLAGS) -c $<

clean	:
		  rm -f $(OBJ)

fclean	: clean
		  rm -f $(NAME)

re		: fclean all