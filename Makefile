NAME	=	tr

SRCS	=	src/tr.c		\
		src/main.c		\
		src/stu_puts.c		\
		src/stu_strlen.c




OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
