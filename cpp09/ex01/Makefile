
CC = c++

CFLAGS = -std=c++98

TARGET = calculadora_rpn

SRCS = RPN.cpp main.cpp

DEPS = RPN.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

.PHONY: all clean fclean
