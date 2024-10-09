NAME_STATIC = libft.a
NAME_SHARED = libft.so

RAW_SRCS = $(shell find .)
SRCS = $(filter %.c, $(RAW_SRCS))
OBJS = $(SRCS:.c=.o)

COMPILER = cc -Wall -Wextra -Werror -I .

# Regras para arquivos objeto
.c.o:
	@ $(COMPILER) -c $< -o $(<:.c=.o)

all: $(NAME_STATIC) $(NAME_SHARED)

$(NAME_STATIC): $(OBJS)
	@ ar rc $(NAME_STATIC) $(OBJS)
	@ echo "libft static compile complete!\n"

$(NAME_SHARED): $(OBJS)
	@ $(COMPILER) -shared -o $(NAME_SHARED) $(OBJS)
	@ echo "libft shared compile complete!\n"

clean:
	@ rm -f $(OBJS)
	@ echo "libft clean complete!\n"

fclean: clean
	@ rm -f $(NAME_STATIC) $(NAME_SHARED)
	@ echo " libft fclean complete!\n"

re: fclean all
	@ echo "🔄 libft re complete!\n"

