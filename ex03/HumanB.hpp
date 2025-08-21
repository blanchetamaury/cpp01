/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:38:00 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/19 16:31:42 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
    public:
        void setWeapon(Weapon &armed);
        void    attack(void);
        HumanB(std::string name);
        ~HumanB();
    private:
        Weapon *weapon;
        std::string name;
};