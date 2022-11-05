.PHONY = clean fclean re all

NAME 	= bureaucrat
CFLAGS 	= -std=c++98 -Wall -Wextra -Werror
SRC		+= Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp
SRC		+= RobotomyRequestForm.cpp ShrubberryCreationForm.cpp Intern.cpp
HEADER 	+= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp Intern.hpp
HEADER 	+= RobotomyRequestForm.hpp ShrubberryCreationForm.hpp
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
