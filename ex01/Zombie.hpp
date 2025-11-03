/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:07:26 by nora              #+#    #+#             */
/*   Updated: 2025/09/22 18:54:17 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce();
	private:
		std::string name;
};
Zombie	*zombieHorde(int N, std::string name);
#endif