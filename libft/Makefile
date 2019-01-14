NAME = libft.a
NAME_PATH = ./

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRC_PATH = ./srcs/
SRC_NAME = ft_memset.c \
			ft_memalloc.c \
			ft_lstnew.c \
			ft_bzero.c \
			ft_memdel.c \
			ft_lstdelone.c \
			ft_memcpy.c \
			ft_strnew.c \
			ft_lstdel.c \
			ft_memccpy.c \
			ft_strdel.c \
			ft_lstadd.c \
			ft_memmove.c \
			ft_strclr.c \
			ft_lstiter.c \
			ft_memchr.c \
			ft_striter.c \
			ft_lstmap.c \
			ft_memcmp.c \
			ft_striteri.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strdup.c \
			ft_strmapi.c \
			ft_strcpy.c \
			ft_strequ.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strcat.c \
			ft_strsub.c \
			ft_strncat.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strtrim.c \
			ft_strchr.c \
			ft_strsplit.c \
			ft_strrchr.c \
			ft_itoa.c \
			ft_strstr.c \
			ft_putchar.c \
			ft_strnstr.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_putendl.c \
			ft_strncmp.c \
			ft_putnbr.c \
			ft_atoi.c \
			ft_putchar_fd.c \
			ft_isalpha.c \
			ft_putstr_fd.c \
			ft_isdigit.c \
			ft_putendl_fd.c \
			ft_isalnum.c \
			ft_putnbr_fd.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_abs.c \
			ft_factorial.c \
			ft_power.c \
			ft_is_prime.c \
			ft_find_next_prime.c \
			ft_countchr.c \
			ft_is_lowercase.c \
			ft_is_uppercase.c \
			ft_is_negative.c \
			ft_list_last.c \
			ft_list_rev.c \
			ft_list_size.c \
			ft_lstaddq.c \
			ft_print_list.c \
			ft_sqrt.c \
			ft_strcapitalize.c \
			ft_strrev.c \
			ft_strtolower.c \
			ft_strtoupper.c \
			ft_str_is_lowercase.c \
			ft_str_is_uppercase.c \
			get_next_line.c \
			Q_rsqrt.c \
			ft_strcspn.c\
			ft_delspaces.c\
			ft_strpbrk.c \
			leap_year.c \
			pgcd.c \
			ft_is_armstrongnumber.c \
			decimal_to_binary.c \
			binary_to_decimal.c \
			decimal_to_octal.c \
			octal_to_decimal.c \
			binary_to_octal.c \
			octal_to_binary.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

INC_PATH = ./includes/
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\x1b[33mObject files created, Now generating lib...\x1b[0m"
	@ar rc $(NAME_PATH)$(NAME) $(OBJ)
	@echo "\x1b[32mDone!\x1b[0m"
	@echo "\x1b[33mIndexing lib...\x1b[0m"
	@ranlib $(NAME_PATH)$(NAME)
	@echo "[$@] Complete"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
	@echo "\x1b[32m[√] \x1b[0m$^ "

clean:
	@echo "\x1b[33mCleaning temp files...\x1b[0m"
	@rm -f $(OBJ)
	@echo "\x1b[32mDone!\x1b[0m"
	@echo "\x1b[33mRemoving temp folder...\x1b[0m"
	@rmdir $(OBJ_PATH) 2>/dev/null || true
	@echo "\x1b[32mDone!\x1b[0m"

fclean: clean
	@echo "\x1b[33mDeleting lib...\x1b[0m"
	@rm -f $(NAME_PATH)$(NAME)
	@echo "\x1b[32mDone!\n\x1b[33mDeleting lib folder...\x1b[0m"
	@echo "\x1b[32mDone!\x1b[0m"

re: fclean all
