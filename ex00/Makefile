# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 14:33:33 by yamajid           #+#    #+#              #
#    Updated: 2024/01/17 12:14:31 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	Animal
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp main.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(otherS)
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

%.o:  %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all
