/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:42 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 12:39:37 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
    std::cout << "Animal Contructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    if (this != & other)
        this->type = other.type;
    return *this;
}

Animal::Animal(std::string tp): type(tp){
    std::cout << "Animal param Contructor called" << std::endl;
}

Animal::Animal(const Animal& obj){
    this->type = obj.type;
}

Animal::~Animal(){
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::setType(std::string typ){
    type = typ;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const{
    std::cout << "Animal function" << std::endl;
}



  

