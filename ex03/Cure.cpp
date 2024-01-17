/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:08:54 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 11:17:12 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure"){
}

Cure::~Cure(){
}

Cure::Cure(const Cure& obj){
    
    type = obj.type;
}

Cure& Cure::operator=(const Cure& other){
    if (this != &other)
        type = other.type;
    return *this;

}

Cure* Cure::clone() const{
    Cure* tmp = new Cure();
    return tmp;
}

std::string const & Cure::getType() const
{
    return (this->type);
}

void Cure::use(ICharacter& target){
    std::cout << "Cure: *heals " << target.getName() << "'s wounds *" << std::endl;
}

