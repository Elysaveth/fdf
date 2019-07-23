NAME = fdf
FLAGS = -Wall -Wextra -Werror
ATTACH = -framework OpenGL -framework AppKit
FT = main.c	error_checker.c	parse_args.c	event_key.c	map_proj.c	draw_line.c
OBJ = $(SRC:%.c=%.o)
SRC = $(FT:%.c=./src/%.c)
HEAD = -I include/ -I libft/ -I minilibx_macos/ 
INC = -L ./libft/ -lft -L ./minilibx_macos/ -lmlx

all: $(NAME)

$(NAME):
	@make -C libft/ re
	@make -C minilibx_macos/ re
	@echo "Compiling FDF"
	@gcc $(FLAGS) -o $(NAME) $(SRC) $(ATTACH) $(HEAD) $(INC)

clean:
	@echo "Delete objects:"
	@rm -f $(OBJ)
	@make -C libft/ clean
	@make -C minilibx_macos/ clean

fclean: clean
	@echo "Delete files:"
	@rm -f $(NAME)
	@make -C libft/ fclean 

re: fclean all

test:
	@./fdf tests/42.fdf

.PHONY: clean fclean all
