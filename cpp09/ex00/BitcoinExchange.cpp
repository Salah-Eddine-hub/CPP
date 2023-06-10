/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:16:02 by sharrach          #+#    #+#             */
/*   Updated: 2023/06/09 20:44:43 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

BitcoinExchange::BitcoinExchange(std::string dataname) : dataname(dataname)
{
	// std::cout << "here" << std::endl;
	check_data();
}

BitcoinExchange::~BitcoinExchange(){
}

static std::string ft_strtrim(std::string mystr){
	size_t begin = mystr.find_first_not_of(" \t\v\r\f");
	size_t end = mystr.find_last_not_of(" \t\v\r\f");

	if (begin == std::string::npos)
		return "";
	mystr = mystr.substr(begin, end - begin + 1);
	return mystr;
}

int BitcoinExchange::get_values(std::string input)
{
	// std::cout << "I enter here" << std::endl;
	std::ifstream infile(input);
	std::string line;
	std::string date;
	float value;
	if (!infile)
	{
		std::cerr << "Error: Invalid file." << std::endl;
		return 0;
	}
	if (infile.is_open())
	{
		// std::cout << "--here" << std::endl;
		std::getline(infile, line, '\n');
		size_t pos = line.find('|');
		date = line.substr(0, pos);
		date = ft_strtrim(date);
		std::string exchangetrm = line.substr(pos + 1, line.length() - date.length() - 1);
		exchangetrm = ft_strtrim(exchangetrm);
		if (date.compare("date") != 0 || exchangetrm.compare("value") != 0)
		{
			std::cerr << "Error: correct the term [date|value]" << std::endl;
			return 0;
		}
	}
	while (std::getline(infile, line))
	{
		// we check here if we are in the last of the file :)
		if (line.empty())
		{
			return 0;
		}
		size_t pos = line.find('|');
		if((int)pos == -1)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = line.substr(0, pos);
		date = ft_strtrim(date);
		std::string bitValue = line.substr(pos + 1, line.length() - date.length() - 1);
		bitValue = ft_strtrim(bitValue);
		value = std::atof(bitValue.c_str());
		
		std::map<std::string, float>::iterator found = this->data.find(date);
		if (found != this->data.end() && check_date(date) && check_values(value)){
			std::cout << date << " => " << value << " = " << value * found->second << std::endl;
		}
		else if(found == this->data.end() && check_date(date) && check_values(value)){
			// std::cout << "this is found hhhhhh 11111=>  " << found->second << std::endl;
			found = this->data.upper_bound(date);
			// std::cout << "this is found hhhhhh222=> " << found->second << std::endl;
			found--;
			// std::cout << "this is found hhhhhh 33333=> " << found->second << std::endl;
			std::cout << date << " => " << value << " = " << value * found->second << std::endl;
		}
	}
	infile.close();
	return 0;
}
// --------------------------------------------------------------------------------------------------

bool BitcoinExchange::check_data()
{
	std::string line;
	std::string date;
	float value;
	std::ifstream infile(this->dataname);
	if (!infile)
	{
		std::cerr << "Error: Invalid file." << std::endl;
		return 0;
	}

	if (infile.is_open())
	{
		while (std::getline(infile, line))
		{
			// we check here if we are in the last of the file :)
			if (line.empty())
			{
				return 0;
			}
			char *linetmp = new char[line.length() + 1];
			std::strcpy(linetmp, line.c_str());
			date = std::strtok(linetmp, ",");
			// std::cout << date << std::endl;
			value = std::atof(line.substr(date.length() + 1, line.length() - date.length() - 1).c_str());
			// std::cout << date << "," << value << std::endl;
			this->data[date] = value;
			delete[] linetmp;
		}
	}
	else
	{
		std::cerr << "Error to open file" << this->dataname << std::endl;
		return 0;
	}
	// here I create an iteratot just to print the values of the map to see if correct
	// std::map<std::string, float>::iterator it = this->data.begin();
	// for (; it != this->data.end(); ++it){
	// 	std::cout << it->first << ", " << it->second << std::endl;
	// }
	infile.close();
	return 1;
}

bool BitcoinExchange::check_values(float values)
{
	if (!values)
	{
		std::cerr << "Error: please print something in value" << std::endl;
	}
	else if (values < 0)
	{
		std::cerr << "Error: the values is less than 0: " << std::endl;
		return false;
	}
	else if (values > 1000)
	{
		std::cerr << "Error: that is too large number." << std::endl;
		return false;
	}
	return 1;
}

bool BitcoinExchange::check_date(std::string date)
{
	if (date.length() != 10)
	{
		std::cerr << "Error: the date is incorrect: " << date << std::endl;
		return (0);
	}
	if (date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Error: Invalid date format" << std::endl;
	}
	// std::cout << "date: " << date << std::endl;
	std::stringstream ss;
	int y, m, d;
	ss <<  date.substr(0, 4);
	ss >> y;
	ss.clear();
	ss << date.substr(5, 2);
	ss >> m;
	ss.clear();
	ss << date.substr(8, 2);
	ss >> d;
	ss.clear();
	// std::cout << "year: |" << date.substr(0, 4) << "| month: |" << date.substr(5, 2) << "| day: |" << date.substr(8, 2) << "|" << std::endl;
	// std::cout << "year: " << y << " month: " << m << " day: " << d << std::endl;
	if (y < 2009 || y > 2022){
		std::cerr << "Error: invalid year ==> " << y << std::endl;
	}
	if (m < 1 || m > 12){
		std::cerr << "Error: invalid month ==> " << m << std::endl;
	}
	if (d < 1 || d > 31){
		std::cerr << "Error: invalid day ==> " << d << std::endl;
	}
	return 1;
}