NAME 		= PhoneBook
CFLAGS		= -Wall -Werror -Wextra -std=c++98
CC			= c++
VPATH		= srcs
INC = -Iincludes/

SRC_FILES	= main \
			  Contact \
			  PhoneBook \


OBJ	= $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I/usr/include -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

push:
	@echo "$(SEPIA)$(BOLD)Uploading data to Bunker...$(RESET)"
	@git add .
	@echo -n "$(WHITE)Enter transmission message: $(RESET)"
	@read commit_message; \
	git commit -m "$$commit_message"; \
	git push; \
	echo "$(SEPIA)Data successfully transmitted: '$$commit_message'$(RESET)"

.PHONY: all clean fclean re
