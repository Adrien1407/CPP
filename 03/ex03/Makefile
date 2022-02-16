# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 17:31:41 by adlancel          #+#    #+#              #
#    Updated: 2022/02/15 11:25:34 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Diamondtrap

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

CXX = c++

CXXFLAGS = -Wextra -Werror -Wall -std=c++98

OBJS = ${SRCS:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			@${CXX} ${CXFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re


