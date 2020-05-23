FLAGS = -Wall -Wextra -Werror

NAME = phonebook

SOURCES =	phonebook.class.cpp\
		main.cpp\
		utils.cpp
	

OBJECT = $(SOURCES:.cpp=.o)

$(NAME):
	@echo "Compilation..."
	@clang++ -o $(NAME) $(FLAGS) $(SOURCES)
	@echo "Compilation phonebook\t\t\033[0;32m[OK]\033[0m"

all:	$(NAME)

clean:
	@rm -f $(OBJECT)
	@echo "Cleaning Objects libft\t\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning phonebook\t\t\033[0;32m[OK]\033[0m"

re: fclean all
