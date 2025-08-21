/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:18:34 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/21 10:58:50 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl tmp;
    tmp.complain("DEBUG");
    std::cout << std::endl;
    tmp.complain("INFO");
    std::cout << std::endl;
    tmp.complain("WARNING");
    std::cout << std::endl;
    tmp.complain("ERROR");
    std::cout << std::endl;
    tmp.complain("fdfs");
}