/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:06 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 15:15:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): Animal("Cat"){
    std::cout << "Cat Contructor called" << std::endl;
}

Cat::Cat(std::string tp): Animal(tp){
    std::cout << "Cat param Contructor called" << std::endl;
}

Cat::Cat(const Cat& other){
    type = other.type;
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Dog Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat called" << std::endl;
}
