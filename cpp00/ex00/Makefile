CXX := g++
NAME := megaphone
CXXFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
rm $(NAME)

fclean: clean
