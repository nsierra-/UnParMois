# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/02 08:22:33 by nsierra-          #+#    #+#              #
#    Updated: 2015/02/04 04:47:15 by nsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	zero

SRC_DIR				=	src/
INC_DIR				=	inc/

CLASS_SRC_SUFFIX	=	.cpp
CLASS_INC_SUFFIX	=	.hpp
CLASSES				=	Game \
						NCursesDisplay

INC_FILES			=	$(addsuffix $(CLASS_INC_SUFFIX), $(CLASSES))
SRC_FILES			=	$(addsuffix $(CLASS_SRC_SUFFIX), $(CLASSES)) \
						main.cpp


SRC					=	$(addprefix $(SRC_DIR), $(SRC_FILES))
INC					=	$(addprefix $(INC_DIR), $(INC_FILES)) \
						IDisplay.hpp
OBJ					=	$(SRC:.cpp=.o)

CC					=	g++
MAKE				=	make

CFLAGS				=	-Wall -Wextra -Werror -pedantic -ansi -g3 #-std=c++0x
IFLAGS				=	-I./$(INC_DIR)
LDFLAGS				=	-lncurses

$(NAME):			$(OBJ)
					$(CC) $(LDFLAGS) $(OBJ) -o $@

all:				$(NAME)

%.o:				%.cpp
					$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
					rm -f $(OBJ)

fclean:
					rm -f $(OBJ)
					rm -f $(NAME)

re:					fclean all
