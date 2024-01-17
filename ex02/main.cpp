/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:33:44 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 14:24:43 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();


delete j;
delete i;
return 0; 
}
