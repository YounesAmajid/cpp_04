/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:57 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/13 15:42:34 by yamajid          ###   ########.fr       */
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
        virtual ~Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& obj);
        virtual void makeSound() const;
        virtual std::string getType() const;
};

class Cat: public Animal{
  public:
        Cat(std::string type);
        std::string getType() const;
        void makeSound() const;
        Cat();
        ~Cat();
};

class Dog: public Animal{
    public:
        Dog(std::string type);
        std::string getType() const;
        void makeSound() const;
        Dog();
        ~Dog();
};