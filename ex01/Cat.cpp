/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:06 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 18:47:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): br(new Brain){
    std::cout << "Cat Contructor called" << std::endl;
}

Cat::Cat(std::string tp): Animal(tp){
    std::cout << "Cat param Contructor called" << std::endl;
}

Cat::~Cat(){
    delete br;
    std::cout << "Dog Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat called" << std::endl;
}
