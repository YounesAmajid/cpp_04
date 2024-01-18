/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:06 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:18:59 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat"), br(new Brain){
    std::cout << "Cat Contructor called" << std::endl;
}

Cat::~Cat(){
    delete br;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(std::string tp): br(new Brain){
    type = tp;
    std::cout << "Cat Param Contructor called" << std::endl;
}


Cat::Cat (const Cat& other){
    this->br = NULL;
    *this = other;
    std::cout << "Cat Copy onstructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj){
    if (this != &obj){
        delete this->br;
        this->br = new Brain(*obj.br);
    }
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}


void Cat::makeSound() const{
    std::cout << "Cat called" << std::endl;
}
