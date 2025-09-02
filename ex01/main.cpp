/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:54:22 by amblanch          #+#    #+#             */
/*   Updated: 2025/09/02 09:27:25 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie *test;
    const int nb = 99999;

    test = zombieHorde(nb, "didier");
    for (int i= 0; i < nb; i++)
        test[i].announce();
    delete[] test;
}