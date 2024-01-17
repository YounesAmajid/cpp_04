/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:39:01 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 12:44:15 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain{
    protected:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain& operator=(const Brain& other);
        Brain(const Brain& obj);
};