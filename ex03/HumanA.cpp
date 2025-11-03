/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:36:25 by nora              #+#    #+#             */
/*   Updated: 2025/09/24 20:41:17 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon)
{
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}