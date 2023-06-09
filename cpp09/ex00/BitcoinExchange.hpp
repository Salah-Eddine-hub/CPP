/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:16:09 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/07 19:56:18 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <time.h>
#include <fstream>
#include <map>

class BitcoinExchange{
public:
	BitcoinExchange(std::string dataname);
	~BitcoinExchange();
	int get_values(std::string input);
	bool check_data();
	bool check_date(std::string date);
	bool check_values(float values);
private:
	std::map<std::string, float> data;
	std::string dataname;
};



#endif