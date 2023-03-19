CC = g++
CFLAGS = -Wall -Wextra -Werror

SRC = main				\
	  BitcoinExchange

OBJ_DIR = obj
OBJ	= $(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER = BitcoinExchange.hpp

INCLUDES = ./

NAME = btc

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
