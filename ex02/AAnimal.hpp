/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:34:57 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:14:27 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal& operator=(const AAnimal& other);
        AAnimal(const AAnimal& obj);
        AAnimal(std::string tp);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        const std::string& getType() const ;
        void setType(std::string typ);
};
