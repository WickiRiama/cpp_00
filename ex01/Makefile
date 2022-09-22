# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 10:16:47 by mriant            #+#    #+#              #
#    Updated: 2022/09/21 16:38:04 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
IFLAGS = -MMD -Iincludes

SRCS = ${addprefix srcs/, \
	Contact.cpp \
	PhoneBook.cpp \
	main.cpp \
	utils.cpp}

OBJS = ${SRCS:srcs/%.cpp=build/%.o}

DEPS = ${SRCS:srcs%.cpp=build/%.d}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

build/%.o: srcs/%.cpp
	mkdir -p build
	${CC} ${CFLAGS} -c $< -o $@ ${IFLAGS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf ${NAME}

.PHONY: re
re: fclean
	make -C .

-include ${DEPS}