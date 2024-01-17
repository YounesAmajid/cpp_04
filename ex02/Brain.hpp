/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:39:01 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 13:01:27 by yamajid          ###   ########.fr       */
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
        Brain& operator=(const Brain& obj);
        Brain(const Brain& other);
};