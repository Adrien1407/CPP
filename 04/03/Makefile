# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 17:31:41 by adlancel          #+#    #+#              #
#    Updated: 2022/01/24 11:47:38 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 

SRCS = AMateria_class.cpp Character_class.cpp Cure_class.cpp Ice_class.cpp  MateriaSource_class.cpp  main.cpp

HEADER = IMateriaSource_class.hpp ICharacter_class.hpp AMateria_class.hpp Character_class.hpp Cure_class.hpp Ice_class.hpp MateriaSource_class.hpp

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

