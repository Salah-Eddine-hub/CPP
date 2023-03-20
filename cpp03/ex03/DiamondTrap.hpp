/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:11:01 by sharrach          #+#    #+#             */
/*   Updated: 2023/03/20 12:14:10 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap{
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& copy);
	~DiamondTrap();
private:
};
#endif