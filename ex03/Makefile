# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 20:54:19 by yamajid           #+#    #+#              #
#    Updated: 2024/01/17 15:54:52 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	AMateria
Run		=	c++ -g
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main.cpp AMateria.cpp 

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(otherS)
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

%.o:  %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all