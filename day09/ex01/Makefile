CC = g++
CFLAGS = -O0 -g3 -std=c++98 -Wall -Wextra -Werror

SRC = main				\
	  RPN

OBJ_DIR = obj
OBJ	= $(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER = RPN.hpp

INCLUDES = ./

NAME = RPN

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ): $(OBJ_DIR)/%.o: %.cpp $(HEADER) Makefile
	$(CC) $< $(CFLAGS) -I $(INCLUDES) -c -o $@

$(NAME): $(OBJ) Makefile
	$(CC) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(OBJ_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
