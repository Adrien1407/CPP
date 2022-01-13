# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 11:12:24 by adlancel          #+#    #+#              #
#    Updated: 2021/12/17 11:22:15 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

SRCS = main.cpp

CC = clang++

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.cpp=.o}

.c.o:
					@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
					@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
					@rm -rf ${OBJS}

fclean:		clean
					@rm -rf ${NAME}
re:			fclean all

.PHONY : all clean fclean re
