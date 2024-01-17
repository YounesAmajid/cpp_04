/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:54:26 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 11:20:40 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void f(){
    system("leaks AMateria");
}

int main()
{
    atexit(f);
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());

    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    
    AMateria* tmp;

    tmp = src->createMateria("cure");
    
    me->equip(tmp);

    tmp = src->createMateria("ice");

    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;
}