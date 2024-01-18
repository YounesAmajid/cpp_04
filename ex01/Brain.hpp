/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:39:01 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/17 16:28:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain& operator=(const Brain& other);
        Brain(const Brain& obj);
};