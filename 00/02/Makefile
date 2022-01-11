# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 20:45:59 by adlancel          #+#    #+#              #
#    Updated: 2021/12/07 20:47:05 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = accounts

SRCS = Account.cpp tests.cpp

HEADER = Account.hpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall

OBJS = ${SRCS:.cpp=.o}

.c.o:
			@${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.cpp=.o}

all:		accounts

accounts:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

