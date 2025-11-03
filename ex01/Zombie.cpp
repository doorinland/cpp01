/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:10:01 by nora              #+#    #+#             */
/*   Updated: 2025/09/22 18:48:36 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	// std::cout << this->name << " is destroyed\n";//ask sondos
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}