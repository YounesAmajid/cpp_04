/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:42 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 15:49:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type(""){
    std::cout << "base Contructor called" << std::endl;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const{
    std::cout << "base function" << std::endl;
}

std::string Cat::getType() const{
    return type;
}

std::string Dog::getType() const{
    return type;
}

Animal::~Animal(){
    std::cout << "base Destructor called" << std::endl;
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

Cat::Cat(){
    std::cout << "Cat Contructor called" << std::endl;
}

Cat::Cat(std::string tp): Animal(tp){
    std::cout << "Cat param Contructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Dog Destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat called" << std::endl;
}
  

Dog::Dog(std::string tp): Animal(tp){
    std::cout << "Dog param Contructor called" << std::endl;
}

Dog::Dog(){
    std::cout << "Cat Destructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Cat Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog called" << std::endl;
}