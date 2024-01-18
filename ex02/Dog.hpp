/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:18 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:10:50 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
    private:
        Brain *br;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& obj);
        ~Dog();
        Dog(std::string type);
        void makeSound() const;
};