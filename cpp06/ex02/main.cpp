/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:14:22 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/23 16:00:26 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
	Base* obj;
	obj = generate();
	identify(obj);

	B b;
	A a;
	C c;

	identify(b);
	identify(a);
	identify(c);

	delete obj;

	return 0;
}