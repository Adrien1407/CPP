# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 20:45:59 by adlancel          #+#    #+#              #
#    Updated: 2022/01/09 16:27:45 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed 

SRCS = main.cpp Fixed.cpp

HEADER = Fixed.hpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall

OBJS = ${SRCS:.cpp=.o}

.c.o:
			@${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

