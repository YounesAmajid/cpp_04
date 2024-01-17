/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:38:46 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 12:44:46 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    (void)other;
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

Brain::Brain(const Brain& obj){
    (void)obj;
    std::cout << "Copy constructor called" << std::endl;    
}