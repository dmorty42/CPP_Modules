# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmorty <dmorty@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 20:21:46 by dmorty            #+#    #+#              #
#    Updated: 2022/01/27 20:24:45 by dmorty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = PhoneBook

SRCS = main.cpp Contact.cpp PhoneBook.cpp
HDRS = PhoneBook.hpp
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