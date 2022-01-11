# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:33:02 by adlancel          #+#    #+#              #
#    Updated: 2021/12/07 12:05:59 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Phonebook
CC				= clang++
HEADER			= ./
FLAGS			= -Wall -Wextra -Werror
RM				= /bin/rm -f

SRCS		= $(addprefix ./, ${SRCS_FILES})
SRCS_FILES	= \

OBJS		= ${SRCS:.c=.o}

%.o: %.c
	@${CC} ${FLAGS} -I ${HEADER} -o $@ -c $<


all:		${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ./main.cpp ${OBJS} -o ${NAME}

clean:
	@${RM}

fclean:		clean
	@${RM} ${NAME}

re:			fclean all

.PHONY:\
	all fclean clean re \
