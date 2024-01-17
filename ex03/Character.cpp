/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:55:10 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 11:18:46 by yamajid          ###   ########.fr       */
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
    delete unequipedMateria;
}

Character::Character(const Character& obj){
    for (size_t i = 0; i < 4; i++)
    {
        if(inve[i])
            this->inve[i] = obj.inve[i]->clone();
        else 
            this->inve[i] = NULL;
    }
    name = obj.name;
}
Character& Character::operator=(const Character& other){
    if (this != &other)
    {
       for (size_t i = 0; i < 4; i++)
        {
            if (this->inve[i])
                delete this->inve[i];
            this->inve[i] = NULL;
        } 
        for (size_t i = 0; i < 4; i++)
        {
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
    if (inve[idx] != NULL)
    {
        unequipedMateria = inve[idx];
        inve[idx] = NULL;
    }
}


void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx <= 3 && inve[idx] != NULL){
        inve[idx]->use(target);
    }
}