/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:33:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/15 10:15:16 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
const WrongAnimal* meta = new WrongAnimal();
// const WrongAnimal* j = new Dog();
const WrongAnimal* i = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
// j->makeSound();
meta->makeSound();
delete meta;
// delete j;
delete i;
return 0;
}
