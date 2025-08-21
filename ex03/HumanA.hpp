/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:37:28 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/19 16:31:07 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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