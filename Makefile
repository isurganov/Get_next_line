NAME = get_next_line.a

FLAG = -Wall -Werror -Wextra 

all: $(NAME)

SRC = get_next_line_utils. c get_next_line.c 

HEADER = get_next_line.h

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@echo "$(NAME) created"
		@ranlib $(NAME)
		@echo "$(NAME) indexed"

%.o: %.c $(HEADER)
		@gcc $(FLAG) -c $< -o $@ -I $(HEADER)

clean:
		@rm -f $(OBJ)
		@echo "OBJ deleted"

fclean: clean
		@rm -f $(NAME)
		@echo "OBJ deleted"
	
re: fclean all

.PHONY: all, clean, fclean, re