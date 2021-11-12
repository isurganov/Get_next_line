NAME = get_next_line.a

DEFINE = -D
SIZE = 1000

FLAG = -Wall -Werror -Wextra 

all: $(NAME)

SRC = get_next_line_utils. c get_next_line.c 

HEADER = get_next_line.h

$(NAME): 
		@gcc $(FLAG) $(DEFINE) BUFFER_SIZE=$(SIZE) $(SRC)

clean:
		@rm -f $(OBJ)
		@echo "OBJ deleted"

fclean: clean
		@rm -f $(NAME)
		@echo "OBJ deleted"
	
re: fclean all

.PHONY: all, clean, fclean, re