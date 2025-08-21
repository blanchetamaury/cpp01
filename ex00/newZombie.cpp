/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:45:09 by amaury            #+#    #+#             */
/*   Updated: 2025/08/10 21:41:13 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name) {
    _name = name;
}

Zombie* newZombie(std::string name) {
    Zombie  *tmp;

    tmp = new Zombie;
    tmp->setName(name);
    return tmp;
}