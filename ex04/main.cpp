/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:38:17 by amblanch          #+#    #+#             */
/*   Updated: 2025/09/03 15:38:08 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string    string_replace(std::string src, std::size_t found, std::string replace, std::string find_arg) {
    return (src.substr(0, found) + replace + src.substr(found + find_arg.length(), src.length() - (found + find_arg.length())));
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "error, nb arg not good, [filename] [s1] [s2]" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (file.bad() || !file) {
        std::cerr << "error, open file" << std::endl;
        return (1);
    }
    std::string tmp;
    std::string buff("");
    std::string find_arg = argv[2];
    std::string replace = argv[3];
    if (find_arg.empty()) {
        std::cerr << "error, arg empty" << std::endl;
        return (1);
    }
    std::size_t i;
    while (getline(file, tmp, '\0')) {
        std::size_t found = tmp.find(argv[2]);
        i = 0;
        while (found != std::string::npos) {
            tmp = string_replace(tmp, found, replace, find_arg);
            i = found + replace.length();
            found = tmp.find(argv[2], i);
        }
        buff += tmp;
    }
    file.close();
    std::string name = std::string(argv[1]) + std::string(".replace");
    std::ofstream output(name.c_str());
    if (output.bad() || !output) {
        std::cerr << "error, open file" << std::endl;
        return (1);
    }
    output << buff;
    output.close();
    return (0);
}