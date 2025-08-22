/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:34:47 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/22 15:16:20 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name);

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );