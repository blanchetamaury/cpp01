/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:18:12 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/22 15:17:10 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
class Harl
{
    public:
        void complain(std::string level);
        Harl(void);
        ~Harl(void);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};
