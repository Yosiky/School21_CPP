CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++11 #-pedantic-errors -Wctor-dtor-privacy -Wnon-virtual-dtor -Wold-style-cast -Woverloaded-virtual -Wsign-promo -Wfloat-equal -Wshadow -Wcast-qual -Wconversion -Wzero-as-null-pointer-constant -Wextra-semi -Wsign-conversion -std=c++98

SRC		=	main		\
			Fixed		\
			Point		\
			bsp

OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER_DIR	=	.
HEADER		=	Fixed.hpp	\
				Point.hpp

DEF_TEST	=	TEST

NAME	=	fixedNumber

.PHONY:	all clean fclean re

all:	$(OBJ_DIR)
	$(MAKE) -j $(NAME)


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o:	%.cpp Makefile
	$(CC) $(CFLAGS) $< -D $(DEF_TEST)=$(PARAM) -c -o $@ 

$(NAME):	$(OBJ) $(HEADER_DIR)/$(HEADER)
	$(CC) $(OBJ) -o $@
