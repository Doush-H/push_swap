NAME = push_swap
BONUS_NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

PRINTFSRC = ft_printf/*.c ft_printf/libft/*.c ft_printf/arg_functions/*.c
PRINTFOBJ = $(PRINTFSRC:.c=.o)

MAIN = main.c

SRC = nums_init.c list_funct.c swap_funct.c push_funct.c rotate_funct.c reverse_rotate_funct.c checks.c sort.c sort_helper.c nums_init_helper.c
OBJ = $(SRC:.c=.o)

GNL_SRC = GNL/get_next_line.c GNL/get_next_line_utils.c
GNL_OBJ = $(GNL_SRC:.c=.o)

BONUS_SRC = nums_init.c checks.c sort.c sort_helper.c nums_init_helper.c list_funct.c checker_bonus/main_bonus.c checker_bonus/push_funct_bonus.c checker_bonus/reverse_rotate_funct_bonus.c checker_bonus/rotate_funct_bonus.c checker_bonus/swap_funct_bonus.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTFSRC) $(MAIN)
	make -C ./ft_printf
	make -C ./ft_printf/libft
	$(CC) $(MAIN) $(OBJ) $(PRINTFOBJ) -fsanitize=address -o $(NAME)

clean:
	make clean -C ft_printf/
	rm -rf ./*.o checker_bonus/*.o GNL/*.o

fclean: clean
	make fclean -C ft_printf/
	rm -rf $(NAME) $(BONUS_NAME) 

bonus: $(BONUS_OBJ) $(GNL_OBJ) $(OBJ) $(PRINTFSRC)
	make -C ./ft_printf
	make -C ./ft_printf/libft
	$(CC) $(BONUS_OBJ) $(GNL_OBJ) $(PRINTFOBJ) -fsanitize=address -o $(BONUS_NAME)

re: fclean all