/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:42:19 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/12 11:15:11 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name) {
    _name = name;
}

Zombie* zombieHorde( int N, std::string name ) {
    Zombie  *Horde;
    
    Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        Horde[i].setName(name);
    return Horde;
}