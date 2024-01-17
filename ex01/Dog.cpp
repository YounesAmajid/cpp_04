/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:13 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 18:47:22 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string tp): Animal(tp){
    std::cout << "Dog param Contructor called" << std::endl;
}

Dog::Dog(): br(new Brain){
    std::cout << "Cat Destructor called" << std::endl;
}

Dog::~Dog(){
    delete br;
    std::cout << "Cat Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog called" << std::endl;
}

Dog::Dog(const Dog& other){
    type = other.type;
}
Dog& Dog::operator=(const Dog& obj){
    if (this != &obj)
        type = obj.type;
    return *this;
}