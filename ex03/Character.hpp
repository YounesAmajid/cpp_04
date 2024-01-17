/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:55:16 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/16 18:04:18 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter{
    private:
        std::string name;
        AMateria *unequipedMateria;
        AMateria* inve[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character& obj);
        Character& operator=(const Character& other);
        
        std::string const & getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
        ~Character();
};