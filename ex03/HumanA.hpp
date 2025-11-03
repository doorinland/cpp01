/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:27:02 by nora              #+#    #+#             */
/*   Updated: 2025/09/24 20:35:11 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string name;
	Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif