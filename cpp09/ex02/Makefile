CC=c++

CFLAGS=-c -Wall

NAME=pmergeme

all: $(NAME)

$(NAME): PmergeMe.o main.o
	$(CC) PmergeMe.o main.o -o $(NAME)

PmergeMe.o: PmergeMe.cpp PmergeMe.hpp
	$(CC) $(CFLAGS) PmergeMe.cpp

main.o: main.cpp PmergeMe.hpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *o $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
