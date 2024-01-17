/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:22:27 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/14 18:44:19 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain *br;
    public:
        Cat();
        Cat(std::string type);
        Cat (const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();
        void makeSound() const;
};