/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:08:37 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:19:53 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
}

Ice::~Ice(){
}

Ice::Ice(const Ice& obj){
    this->type = obj.type;
}

Ice& Ice::operator=(const Ice& other){
    if (this != &other)
        type = other.type;
    return *this;
}

Ice* Ice::clone() const{
    return new Ice();
}
void Ice::use(ICharacter& target){
    std::cout << "Ice: *shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
std::string const & Ice::getType() const 
{
    return (this->type);
}