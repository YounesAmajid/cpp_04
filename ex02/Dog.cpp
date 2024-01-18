/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:13 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:13:10 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string tp): br(new Brain){
    type = tp;
    std::cout << "Dog param Contructor called" << std::endl;
}

Dog::Dog(): AAnimal("Dog"), br(new Brain){
    std::cout << "Param constructor called" << std::endl;
}

Dog::~Dog(){
    delete br;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& other){
    this->br = NULL;
    *this = other;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj){
    if (this != &obj){
        delete this->br;
        this->br = new Brain(*obj.br);
    }
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Dog called" << std::endl;
}
