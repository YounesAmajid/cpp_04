/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:55:10 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 17:03:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name("Unknown Character"){
    for (int i = 0; i < 4; i++)
        inve[i] = NULL;
}

Character::Character(std::string nm):name(nm){
    for (int i = 0; i < 4; i++)
        inve[i] = NULL;
}

Character::~Character(){
    for (int i = 0; i < 4; i++)
        delete inve[i];
}

Character::Character(const Character& obj){
    for (int i = 0; i < 4; i++)
        inve[i] = NULL;
    *this = obj;
}
Character& Character::operator=(const Character& other){
    if (this != &other)
    {
        for (size_t i = 0; i < 4; i++)
        {
            delete this->inve[i];
            if(other.inve[i])
                this->inve[i] = other.inve[i]->clone();
            else 
                this->inve[i] = NULL;
        }
        name = other.name; 
    }
    return *this;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (!inve[i])
        {
            inve[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 &&  idx < 4 && inve[idx] != NULL)
    {
        inve[idx] = NULL;
    }
}


void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx <= 3 && inve[idx] != NULL){
        inve[idx]->use(target);
    }
}