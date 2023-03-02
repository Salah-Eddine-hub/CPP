/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:29 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/02 09:35:49 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

int main(int ac, char *av[]){
	std::string s1, s2, filename;
	std::string *buffer;
	size_t len;
	if (ac != 4){
		std::cerr << "invalid format" << std::endl;
	}
	s1 = av[2];
	std::ifstream infile(av[1]);
	std::cout << "chose a name to the filename: ";
	std::cin >> filename;
	std::ofstream outfile(filename);
	if (!outfile){
		std::cerr << "Error: faild to create file" << filename << std::endl;
		return 1;
	}
	if (infile.is_open()){
		std::string line;
		while(std::getline(infile, line)){
			buffer << line << std::endl;
		}
		len = s1.lenght();
	}
	else{
		std::cerr << "Error: cannot create file " << av[1] << std::endl;
		return 1;
	}
	return 0;
}
