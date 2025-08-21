/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:22:37 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/19 16:31:29 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack(void) {
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string new_name, Weapon &new_weapon) {
    name = new_name;
    weapon = &new_weapon;
    std::cout << "construtor HumanA" << std::endl;
}

HumanA::~HumanA(void) {
    std::cout << "destructor HumanA" << std::endl;
}