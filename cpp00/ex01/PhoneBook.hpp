/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:09:12 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/23 14:12:50 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook();
	Contact	get_contact(int i);
	void	contact_search();
	void	add_contact();
private:
	Contact contacts[8];
	int		i;
	int		n;
};

#endif