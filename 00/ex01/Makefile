NAME	=	ex00

all: $(NAME) 

$(NAME):
	@c++ -Wall -Wextra -Werror -fsanitize=leak -std=c++98 -o $(NAME) megaphone.cpp

fclean:
	@rm -rf ex00

clean:
	@rm -rf ex00
re: fclean $(NAME) 