NAME = Account

SRC_FILES = Account.cpp \
			tests.cpp \

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

CC = c++

CFLAGS = -Wno-deprecated -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): 
	$(CC) -o $(NAME) $(SRC)

clean:
	echo "No object files to clean"

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
