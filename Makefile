# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 10:16:47 by mriant            #+#    #+#              #
#    Updated: 2022/08/15 10:35:10 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
IFLAGS = -MMD

SRCS = srcs/megaphone.cpp

OBJS = ${SRCS:srcs/%.c=build/%.o}

DEPS = ${SRCS:srcs%.c=build/%.d}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${OBJS} -o ${NAME}

build/%.o: srcs/%.c
	mkdir -p build
	${CC} ${CFLAGS} -c ${OBJS} -o ${NAME} ${IFLAGS}

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
