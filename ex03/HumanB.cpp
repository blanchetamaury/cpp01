/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:28:35 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/19 16:31:56 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::attack(void) {
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string new_name) {
    name = new_name;
    std::cout << "construtor HumanB" << std::endl;
}

HumanB::~HumanB(void) {
    std::cout << "destructor HumanB" << std::endl;
}

void HumanB::setWeapon(Weapon &armed) {
    weapon = &armed;
}