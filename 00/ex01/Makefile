# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:33:02 by adlancel          #+#    #+#              #
#    Updated: 2022/02/07 15:00:03 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = phonebook

SRCS = main.cpp Contact.cpp Phonebook.cpp

HEADER = Phonebook.hpp Contact.hpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -std=c++98

OBJS = ${SRCS:.cpp=.o}

.c.o:
			@${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re


