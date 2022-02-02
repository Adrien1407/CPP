# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 14:28:17 by adlancel          #+#    #+#              #
#    Updated: 2022/01/27 12:55:03 by adlancel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat 

SRCS = Bureaucrat_class.cpp main.cpp Form_class.cpp PresidentialPardonForm_class.cpp ShrubberyCreationForm_class.cpp ./RobotmyRequestForm_class.cpp

HEADER = Bureaucrat_class.hpp Form_class.hpp PresidentialPardonForm_class.hpp RobotmyRequestForm_class.hpp ShrubberyCreationForm_class.hpp

CC = g++

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


