/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:27:54 by nora              #+#    #+#             */
/*   Updated: 2025/09/22 18:38:10 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 5;

	horde = zombieHorde(N, "nagha");
	for (int i = 0; i < N ; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}