/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:04:22 by nora              #+#    #+#             */
/*   Updated: 2025/09/24 20:19:46 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string type);
	private:
		std::string type;
};

#endif