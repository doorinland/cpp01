/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:19:59 by nora              #+#    #+#             */
/*   Updated: 2025/09/24 20:25:56 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string t_ype)
{
	type = t_ype;
}

const std::string &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string t_ype)
{
	type = t_ype;
}

Weapon::~Weapon()
{
	
}