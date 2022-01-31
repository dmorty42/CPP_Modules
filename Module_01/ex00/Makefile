# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 23:54:58 by dmorty            #+#    #+#              #
#    Updated: 2022/01/27 23:56:11 by dmorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = zombie

SRCS = randomChump.cpp main.cpp newZombie.cpp Zombie.cpp
HDRS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp $(HDRS)
	c++ -c $(CFLAGS) $< -o $@

CC = c++ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all