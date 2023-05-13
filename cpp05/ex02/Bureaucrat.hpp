/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:58:38 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/08 14:53:21 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();
	std::string const getName() const;
	void setGrade(int grade);
	int	getGrade() const;
	void increment();
	void decrement();
	void signForm(AForm *obj);

	void executeForm(AForm const& form);
private:
	const std::string name;
	int grade;
	class GradeTooLowException : public std::exception {
		const char* what() const throw() {
			return "Bureaucrat grade too low";
		}
	};
	class GradeTooHighException : public std::exception {
		const char* what() const throw() {
			return "Bureaucrat grade too high";
		}
	};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif