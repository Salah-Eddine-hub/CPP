/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:14:49 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/23 15:43:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>

class Base{
public:
	Base();
	virtual ~Base();
private:
};
	Base* generate(void);
	void identify(Base* p);
	void identify(Base& p);

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif