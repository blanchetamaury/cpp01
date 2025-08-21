/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:41:17 by amaury            #+#    #+#             */
/*   Updated: 2025/08/20 20:16:24 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        void setName(std::string name);

    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);