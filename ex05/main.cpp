/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:30:02 by nora              #+#    #+#             */
/*   Updated: 2025/09/25 17:49:25 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::cout << "------ DEBUG Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << "------ INFO Level ------" << std::endl;
	harl.complain("INFO");
	std::cout << "------ WARNING Level ------" << std::endl;
	harl.complain("WARNING");
	std::cout << "------ ERROR Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << "------ No valid Level ------" << std::endl;
	harl.complain("ALARM");
}