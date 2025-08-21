/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:16:43 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/21 13:20:24 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string Weapon::getType(void) {
    return type;
}

void Weapon::setType(std::string newType) {
    type = newType;
}

Weapon::Weapon(std::string name) {
    type = name;
    std::cout << "construtor Weapon" << std::endl;
}

Weapon::~Weapon(void) {
    std::cout << "destructor Weapon" << std::endl;
}