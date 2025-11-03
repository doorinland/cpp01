/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:58:06 by nora              #+#    #+#             */
/*   Updated: 2025/09/21 22:53:24 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
