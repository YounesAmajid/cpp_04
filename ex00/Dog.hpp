/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:18 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 17:06:45 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& obj);
        ~Dog();
        Dog(std::string type);
        void makeSound() const;
};