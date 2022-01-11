# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 17:31:41 by adlancel          #+#    #+#              #
#    Updated: 2022/01/09 18:41:46 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.cpp

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


