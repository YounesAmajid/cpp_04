/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:08:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/16 17:36:42 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria{
    public:
        Ice();
        Ice(const Ice& obj);
        Ice& operator=(const Ice& other);
        ~Ice();
        std::string const & getType() const;
        void use(ICharacter& target);
        Ice* clone() const;
};
