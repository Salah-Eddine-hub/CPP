/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:03:51 by sharrach          #+#    #+#             */
/*   Updated: 2023/02/13 15:54:20 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char *argv[])
{
	size_t	i, j;
	char	message;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	i = 1;
	while(argv[i])
	{
		j = 0;
		while(j < strlen(argv[i]))
		{
			message = toupper(argv[i][j]);
			std::cout << message;
			j++;
		}
		i++;
	}
	std::cout << std::endl;

	return 0;
}