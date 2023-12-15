# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:39:34 by aloubier          #+#    #+#              #
#    Updated: 2023/12/15 16:39:36 by aloubier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awesome_Phonebook

SRC_DIR = src/

INC_DIR = inc/

OBJ_DIR = build/

SRC_FILES = main.cpp \
			Contact.cpp \
			Phonebook.cpp

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_FILES = $(SRC_FILES:.cpp=.o)

OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p '$(OBJ_DIR)'
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
