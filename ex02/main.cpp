/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:20:01 by amblanch          #+#    #+#             */
/*   Updated: 2025/09/01 09:48:03 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string tmp("HI THIS IS BRAIN");
    std::string *stringPTR = &tmp;
    std::string &stringREF = tmp;
    
    std::cout << "memory address (tmp):" << &tmp << std::endl;
    std::cout << "memory address (PTR):" << &stringPTR << std::endl;
    std::cout << "memory address (REF):" << &stringREF << std::endl;

    std::cout << "pointed (tmp):" << tmp << std::endl;
    std::cout << "pointed (PTR):" << *stringPTR << std::endl;
    std::cout << "pointed (REF):" << stringREF << std::endl;
}