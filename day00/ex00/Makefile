FLAGS = -Wall -Wextra -Werror

NAME = megaphone

SOURCES = megaphone.cpp

OBJECT = $(SOURCES:.cpp=.o)

$(NAME):
	@echo "Compilation..."
	@clang++ -o megaphone $(FLAGS) $(SOURCES)
	@echo "Compilation megaphone\t\t\033[0;32m[OK]\033[0m"

all:	$(NAME)

clean:
	@rm -f $(OBJECT)
	@echo "Cleaning Objects libft\t\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning megaphone\t\t\033[0;32m[OK]\033[0m"

re: fclean all
