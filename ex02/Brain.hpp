/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:39:01 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/15 10:12:30 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain& operator=(const Brain& obj);
        Brain(const Brain& other);
};