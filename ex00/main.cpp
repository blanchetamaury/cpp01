/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:28:28 by amaury            #+#    #+#             */
/*   Updated: 2025/08/22 15:14:00 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *test;
    Zombie  *test1;
    
    test = newZombie("salut");
    randomChump("name");
    test1 = newZombie("tmp");
    test->announce();
    test1->announce();
    delete test;
    delete test1;
}