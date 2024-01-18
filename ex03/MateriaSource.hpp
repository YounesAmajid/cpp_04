/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:54:51 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 15:45:14 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria* src[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();
        void learnMateria(AMateria* amate);
        AMateria* createMateria(std::string const & type);
};