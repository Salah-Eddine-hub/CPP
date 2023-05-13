/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:04:06 by sharrach          #+#    #+#             */
/*   Updated: 2023/05/13 11:11:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
   int i = 39;
   int j = 20;
   std::cout << "Max(i, j): " << Max(i, j) << std::endl; 

   double f1 = 13.5; 
   double f2 = 20.7; 
   std::cout << "Max(f1, f2): " << Max(f1, f2) << std::endl; 

   std::string s1 = "Hello"; 
   std::string s2 = "World"; 
   std::cout << "Max(s1, s2): " << Max(s1, s2) << std::endl; 

   return 0;
}