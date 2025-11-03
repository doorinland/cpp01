/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:56:53 by nora              #+#    #+#             */
/*   Updated: 2025/09/21 22:53:28 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destroyed" << std::endl;
}