/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:13 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 13:08:52 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string tp): Animal(tp), br(new Brain){
    std::cout << "Dog param Contructor called" << std::endl;
}

Dog::Dog(): br(new Brain){
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& other){
    keep = this->br;
    this->br = other.br;
    delete br;
    this->type = other.type;
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj){
    if (this != &obj){
        keep = this->br;
        this->br = obj.br;
        this->type = obj.type;
        delete br;
    }
    std::cout << "Dog Copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog(){
    delete br;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog called" << std::endl;
}
