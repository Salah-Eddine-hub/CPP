/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:29 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/12 11:30:59 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

int main(int ac, char *av[]){
	std::string s1, s2, filename;
	std::string buffer;
	size_t len;

	s1 = av[2];
	if (ac != 4 || s1.empty()){
		std::cerr << "invalid format" << std::endl;
		return (1);
	}
	s2 = av[3];
	std::ifstream infile(av[1]);
	if (!infile){
		std::cout << "cannot create infile" << std::endl;
		return 1;
	}
	filename = av[1];
	std::ofstream outfile(filename + ".replace");
	if (!outfile){
		std::cerr << "Error: faild to create file" << filename << std::endl;
		return 1;
	}
	if (infile.is_open()){
		std::getline(infile, buffer, '\0');
		len = s1.length();
		int i  = 0;
		while(buffer[i]){
			int found = -1;
			found = buffer.find(s1, i);
			if (found != -1)
			{
				buffer.erase(found, len);
				buffer.insert(found, s2);
				i = found + strlen(av[3]);
				continue;
			}
			i++;
		}
		outfile << buffer;
	}
	else{
		std::cerr << "Error: cannot create file " << av[1] << std::endl;
		return 1;
	}
	return 0;
}
