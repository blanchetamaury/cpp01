/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:37:28 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/22 15:16:32 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA {
    public:
        void    attack(void);
        HumanA(std::string new_name, Weapon &new_weapon);
        ~HumanA();
    private:
        Weapon *weapon;
        std::string name;
};