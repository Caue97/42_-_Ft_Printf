# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: felcaue- <felcaue-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 18:30:16 by felcaue-          #+#    #+#              #
#    Updated: 2021/10/23 19:07:07 by felcaue-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
LIB			= ar -rcs
RM			= /bin/rm -f

DIRECTORY	=	Objs_printf

INCLUDE		=	ft_printf.h 
SRCS		=	ft_printf.c \
				$(ADD_ARG) \
				
ARGS		=	argument_c.c argument_d.c argument_i.c \
				argument_p.c argument_s.c argument_u.c \
				argument_x_lower.c argument_x_upper.c \
				
ADD_ARG		=	$(addprefix arguments/,$(ARGS))
				

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(DIRECTORY)/%.o:	%.c
					mkdir -p $(@D)
					make -C libft
					cp libft/libft.a $(NAME)
					$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB) $(NAME) $(OBJS)

git:
			git add .
			git commit -m "updating norminette v3"
			git push

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re