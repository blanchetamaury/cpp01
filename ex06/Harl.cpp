/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:18:32 by amblanch          #+#    #+#             */
/*   Updated: 2025/09/02 09:56:59 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

Harl::Harl() {
}

Harl::~Harl() {
}


void Harl::complain(std::string level) {
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = 0;
    while (i < 4) {
        if (arr[i] == level) {
            break ;
        }
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*fct[0])();
        case 1:
            (this->*fct[1])();
        case 2:
            (this->*fct[2])();
        case 3:
            (this->*fct[3])();
            break;
        case 4:
            std::cout << "ERROR, [" << level << "] word not found!" << std::endl;
            break;
    }
}
