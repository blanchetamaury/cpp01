/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:34:47 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/20 20:17:56 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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