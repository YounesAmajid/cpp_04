/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:02:17 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 15:16:53 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal{
  protected:
        std::string type;
  public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& obj);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};
