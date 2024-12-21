# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zait-hmi <zait-hmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 22:44:42 by zait-hmi          #+#    #+#              #
#    Updated: 2024/11/28 22:44:42 by zait-hmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_putcharcount.c \
		ft_puthexanbrcount.c \
		ft_putnbrcount.c \
		ft_putptr.c \
		ft_putstrcount.c \
		ft_putunbrcount.c

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
