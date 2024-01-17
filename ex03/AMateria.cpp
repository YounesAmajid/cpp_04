/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:17:49 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 11:14:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Character.hpp"
AMateria::AMateria(){
    
}

AMateria::AMateria(std::string const & tp): type(tp){
    
}

AMateria::AMateria(const AMateria& obj){
    this->type = obj.type;
}

AMateria& AMateria::operator=(const AMateria& other){
    if (this != &other)
        this->type = other.type;
    return *this;
}
AMateria::~AMateria(){
        
}
std::string const & AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter& target){
    std::cout << "The AMateria " << type << " is used on "<< target.getName() << std::endl;
}