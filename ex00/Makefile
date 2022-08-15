# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 10:16:47 by mriant            #+#    #+#              #
#    Updated: 2022/08/15 13:29:02 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
IFLAGS = -MMD

SRCS = srcs/megaphone.cpp

OBJS = ${SRCS:srcs/%.cpp=build/%.o}

DEPS = ${SRCS:srcs%.cpp=build/%.d}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

build/%.o: srcs/%.cpp
	mkdir -p build
	${CC} ${CFLAGS} -c $^ -o $@ ${IFLAGS}

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
