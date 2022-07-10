CC		=	clang++
CFLAGS	=	-Werror -Wextra -Wall -std=c++98

SRC		=	megaphone
OBJ_DIR	=	ojb
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

NAME	=	exercise

.PHONY:	all clean fclean re

$(OBJ_DIR)/%.o:	%.cpp
	$(CC) $(CFLAGS) $< -c -o $@

all:	$(OBJ_DIR)
	$(MAKE) -j $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
