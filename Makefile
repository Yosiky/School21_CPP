CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -pedantic-errors -Wctor-dtor-privacy -Wnon-virtual-dtor -Wold-style-cast -Woverloaded-virtual -Wsign-promo -Wfloat-equal -Wshadow -Wcast-qual -Wconversion -Wzero-as-null-pointer-constant -Wextra-semi -Wsign-conversion -std=c++98

SRC		=	megaphone
OBJ_DIR	=	ojb
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

NAME	=	megaphone

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
