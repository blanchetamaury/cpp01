/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:18:32 by amblanch          #+#    #+#             */
/*   Updated: 2025/09/02 09:50:52 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {
    std::cout << "constructor" << std::endl;
}

Harl::~Harl() {
    std::cout << "destructor" << std::endl;
}


void Harl::complain(std::string level) {
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    

    for (int i = 0; i < 4; i++) {
        if (arr[i] == level) {
            (this->*fct[i])();
            return ;
        }
    }
    std::cout << "ERROR, [" << level << "] word not found!" << std::endl;
}
