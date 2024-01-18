/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:13 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 15:16:00 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string tp): Animal(tp){
    std::cout << "Dog param Contructor called" << std::endl;
}

Dog::Dog(): Animal("Dog"){
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& other){
    type = other.type;
}
Dog& Dog::operator=(const Dog& obj){
    if (this != &obj)
        type = obj.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Dog called" << std::endl;
}