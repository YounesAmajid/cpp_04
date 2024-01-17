/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:38:46 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/15 12:41:57 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "brain Default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
    (void)other;
    std::cout << "Brain Copy assignement operator called" << std::endl;
    return *this;
}

Brain::Brain(const Brain& obj){
    (void)obj;
    std::cout << "Brain Copy constructor called" << std::endl;    
}