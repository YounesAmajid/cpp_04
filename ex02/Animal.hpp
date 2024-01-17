/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:57 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/15 12:32:20 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string tp);
        Animal(const Animal& other);
        Animal& operator=(const Animal& obj);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string typ);
};
