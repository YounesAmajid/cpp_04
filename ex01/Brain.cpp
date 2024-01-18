/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:38:46 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:05:51 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Destructor called" << std::endl;
}

Brain::Brain(const Brain& obj){
    *this = obj;
    std::cout << "Copy constructor called" << std::endl;    
}

Brain& Brain::operator=(const Brain& other){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

