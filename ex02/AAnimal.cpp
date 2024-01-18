/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:04:51 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:14:09 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    
}

AAnimal::AAnimal(std::string tp): type(tp){
    
}

AAnimal::~AAnimal(){
    
}

AAnimal&  AAnimal::operator=(const AAnimal& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}

AAnimal::AAnimal(const AAnimal& obj){
    this->type = obj.type;
}

const std::string& AAnimal::getType() const {
    return type;
}

void AAnimal::setType(std::string typ){
    type = typ;
}