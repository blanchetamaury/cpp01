/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:07:51 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/22 15:16:52 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {
    public:
        const std::string getType();
        void    setType(std::string newType);
        Weapon(std::string name);
        ~Weapon();
    private:
          std::string type;
};