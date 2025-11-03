/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:12:33 by nora              #+#    #+#             */
/*   Updated: 2025/09/21 14:26:08 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *newZ;

	newZ = newZombie("new");
	newZ->announce();
	randomChump("random");
	delete newZ;
	return (0);
}