NAME	=	megaphone

all: $(NAME) 

$(NAME):
	@c++ -Wall -Wextra -Werror -fsanitize=leak -std=c++98 -o $(NAME) megaphone.cpp

fclean:
	@rm -rf $(NAME)

clean:
	@rm -rf $(NAME)
re: fclean $(NAME) 