/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:41:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/09 12:33:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <cstring>
#include <iostream>
#include <functional>

class Intern{
public:
	Intern();
	~Intern();
	AForm* makeForm(std::string formName, std::string formTarget);
	AForm* PresidentialPardonForm_N(std::string name);
	AForm* RobotomyRequestForm_N(std::string name);
	AForm* ShrubberyCreationForm_N(std::string name);
};
#endif