/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:56:51 by nora              #+#    #+#             */
/*   Updated: 2025/09/22 19:28:23 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the str: " << &str << std::endl;
	std::cout << "The memory address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address of the stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the str: " << str << std::endl;
	std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value of the stringREF: " << stringREF << std::endl;
}