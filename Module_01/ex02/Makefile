# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 23:54:58 by dmorty            #+#    #+#              #
#    Updated: 2022/01/28 01:31:45 by dmorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = reference

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	c++ -c $(CFLAGS) $< -o $@

CC = c++ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all