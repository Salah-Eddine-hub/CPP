/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:41:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/04/06 09:44:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <cstring>

class Intern{
public:
	Intern();
	~Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& copy);
	Form* makeForm(std::string formName, std::string formTarget);
private:

};
#endif