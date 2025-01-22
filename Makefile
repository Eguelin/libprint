.PHONY: all clean fclean re

# **************************************************************************** #
#                                   Variable                                   #
# **************************************************************************** #

NAME		= libprint.a
OBJS_DIR	= .objs/
SRCS_DIR	= srcs/
INCS_DIR	= includes/
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -fsanitize=address -g
INCS		= -I $(INCS_DIR)
ARC			= ar rcs
PRINT		= @printf
LIB			= -L. -lprint
RM			= rm -fr

# **************************************************************************** #
#                                    Colors                                    #
# **************************************************************************** #

BLACK	= \033[30m
RED		= \033[31m
GREEN	= \033[32m
YELLOW	= \033[33m
BLUE	= \033[34m
PURPLE	= \033[35m
CYAN	= \033[36m
WHITE	= \033[37m
DEFAULT	= \033[0m

# **************************************************************************** #
#                                    Message                                   #
# **************************************************************************** #

COMP_MSG		= "$(GREEN)Compilation $(NAME) $(DEFAULT)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(DEFAULT)\n"
BONUS_COMP_MSG	= "$(BLUE)Compilation $(NAME) bonus $(DEFAULT)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(DEFAULT)\n"
CLEAN_MSG		= "$(RED)Cleaning $(NAME) $(DEFAULT)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(DEFAULT)\n"
FULL_CLEAN_MSG	= "$(PURPLE)Full cleaning $(NAME) $(DEFAULT)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(DEFAULT)\n"

# **************************************************************************** #
#                                    Sources                                   #
# **************************************************************************** #

UTILS_DIR		= utils/
UTILS_FILES		= ft_strlen.c \
				  ft_strchr.c \
				  ft_put_arg_buff.c \
				  ft_put_char_buff.c \
				  ft_put_hex_buff.c \
				  ft_put_hexup_buff.c \
				  ft_put_long_buff.c \
				  ft_put_str_buff.c \
				  ft_put_ulong_buff.c \
				  ft_put_ulongb_buff.c \
				  ft_getarg.c \
				  ft_init_pf.c

ALL_FILES	= ft_printf.c

ALL_FILES	+= $(addprefix $(UTILS_DIR), $(UTILS_FILES))

OBJS_FILES	= $(addprefix $(OBJS_DIR), $(ALL_FILES:.c=.o))

DEP_FILES	= $(OBJS_FILES:.o=.d)

OBJS_DIRS	= $(sort $(dir $(OBJS_FILES)))

# **************************************************************************** #
#                                     Rules                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS_FILES)
	$(ARC) $(NAME) $(OBJS_FILES)
	$(PRINT) $(COMP_MSG)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJS_DIRS)
	$(CC) $(CFLAGS) $(INCS) -MMD -MP -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)
	$(PRINT) $(CLEAN_MSG)

fclean: clean
	$(RM) $(NAME)
	$(RM) test
	$(PRINT) $(FULL_CLEAN_MSG)

re: fclean all

$(OBJS_DIRS):
	mkdir -p $@

test: all
	$(CC) $(CFLAGS) $(INCS) main.c $(LIB) -o test
	./test

-include $(DEP_FILES)
