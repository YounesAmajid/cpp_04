/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:02:14 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 12:20:08 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;    
}


WrongCat::WrongCat(const WrongCat& other){
    this->type = other.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj){
    if (this != &obj)
        this->type = obj.type;
    std::cout << "WrongCat copy assignemnt operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat desstructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat Called" << std::endl;
}