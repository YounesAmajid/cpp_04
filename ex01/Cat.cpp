/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:06 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 13:08:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(): br(new Brain){
    std::cout << "Cat Contructor called" << std::endl;
}

Cat::Cat(std::string tp): Animal(tp), br(new Brain){
    std::cout << "Cat Param Contructor called" << std::endl;
}


Cat::Cat (const Cat& other){
    keep = this->br;
    this->br = other.br;
    this->type = other.type;
    delete keep;
    std::cout << "Cat Copy onstructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other){
        keep = this->br;
        this->br = other.br;
        this->type = other.type;
        delete keep;
    }
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

Cat::~Cat(){
    delete br;
    std::cout << "Dog Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat called" << std::endl;
}
