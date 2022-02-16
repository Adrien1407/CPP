# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 20:45:59 by adlancel          #+#    #+#              #
#    Updated: 2022/02/15 10:01:54 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed 

SRCS = main.cpp Fixed.cpp

HEADER = Fixed.hpp

CXX = c++

CXXFLAGS = -Wextra -Werror -Wall -std=c++98

OBJS = ${SRCS:.cpp=.o}


all:	${NAME}

${NAME}:	${OBJS}
			@${CXX} ${CXFLAGS} ${OBJS} -o ${NAME}

clean:
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

