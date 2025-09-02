/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:55:08 by amaury            #+#    #+#             */
/*   Updated: 2025/09/02 09:26:26 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::cout << "constructor" << std::endl;
    this->_name = "";
};

Zombie::~Zombie(void) {
    std::cout << this->_name << "destructor" << std::endl;
}

void   Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}