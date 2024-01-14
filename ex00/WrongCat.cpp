/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:02:14 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 18:27:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "Cat default constructor called" << std::endl;    
}

WrongCat::~WrongCat(){
    std::cout << "Cat desstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj){
    std::cout << "Cat copy assignemnt operator called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "Cat Called" << std::endl;
}