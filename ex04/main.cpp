/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:38:17 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/20 10:14:58 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string    string_replace(std::string src, std::size_t found, std::size_t length, std::string replace) {
    std::size_t len = length;
    std::size_t i = 0;
    while (i < len) {
        src[found + i] = replace[i];
        i++;
    }
    return (src);
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "error, nb arg not good, [filename] [s1] [s2]" << std::endl;
        return (0);
    }
    std::ifstream file(argv[1]);
    if (file.bad()) {
        std::cerr << "error, open file" << std::endl;
        return (1);
    }
    std::string tmp;
    std::string buff("");
    std::string find_arg = argv[2];
    std::string replace = argv[3];
    while (getline(file, tmp, '\0')) {
        std::size_t found = tmp.find(argv[2]);
        while (found != std::string::npos) {
            tmp = string_replace(tmp, found, replace.length(), replace);
            found = tmp.find(argv[2]);
        }
        buff += tmp;
    }
    file.close();
    std::ofstream output(argv[1]);
    if (output.bad()) {
        std::cerr << "error, open file" << std::endl;
        return (1);
    }
    output << buff;
    output.close();
    return (0);
}