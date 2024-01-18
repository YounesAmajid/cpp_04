/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:56:20 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:39:06 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        src[i] = NULL;
}

MateriaSource::~MateriaSource(){
    for (size_t i = 0; i < 4; i++)
    {
        delete src[i];
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (this != &other){
        for (size_t i = 0; i < 4; i++)
        {
            delete this->src[i];
            if(other.src[i])
                this->src[i] = other.src[i]->clone();
            else 
                this->src[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::MateriaSource(const MateriaSource& obj){
    for (int i = 0; i < 4; i++)
        this->src[i] = NULL;
    *this = obj;
}

void MateriaSource::learnMateria(AMateria* amate){
    if (!amate)
        return ;
    for (int i = 0; i < 4; i++){
        if (src[i] == NULL)
        {
            src[i] = amate;
            return ;
        }
    }
    delete amate;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (src[i] && src[i]->getType() == type)
            return src[i]->clone();
    }
    return 0;
}