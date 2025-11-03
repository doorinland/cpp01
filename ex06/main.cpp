/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:04:28 by nora              #+#    #+#             */
/*   Updated: 2025/09/25 18:42:00 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int c, char **v)
{
	if (c != 2)
	{
		std::cout << "Error: Invalid arguement" << std::endl;
		return (1);
	}
	Harl harl;
	std::string level;
	level = v[1];
	harl.complain(level);
	return (0);
}