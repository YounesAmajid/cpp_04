/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:42 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/15 12:39:41 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
    std::cout << "base Contructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "base Destructor called" << std::endl;
}

void Animal::setType(std::string typ){
    type = typ;
}

std::string Animal::getType() const{
    return type;
}

Animal& Animal::operator=(const Animal& other){
    if (this != & other)
        type = other.type;
    return *this;
}

Animal::Animal(std::string tp): type(tp){
    std::cout << "base param Contructor called" << std::endl;
}

Animal::Animal(const Animal& obj){
    type = obj.type;
}


  

