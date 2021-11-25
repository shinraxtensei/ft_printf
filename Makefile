# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahouari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 09:35:41 by ahouari           #+#    #+#              #
#    Updated: 2021/11/25 09:35:47 by ahouari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	  ft_printf.c   ft_putnbr.c ft_print_hexa_lower.c \
						ft_putnbr_u.c  ft_print_hexa_upper.c\
						ft_putchar.c  ft_putstr.c ft_strlen.c ft_printf_p.c


OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
