/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nora <nora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 23:21:56 by nora              #+#    #+#             */
/*   Updated: 2025/09/25 15:50:20 by nora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace_in_string(std::string &line, const std::string &s1, const std::string &s2)
{
	if (s1.empty())
		return;
		
	std::string result;
	size_t pos = 0;
	size_t found;
	
	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		// Add everything before the found position
		result += line.substr(pos, found - pos);
		// Add the replacement string
		result += s2;
		// Move position past the found string
		pos = found + s1.length();
	}
	// Add the rest of the string
	result += line.substr(pos);
	line = result;
}

void	read_files(std::ifstream &inFile, std::ofstream &outFile, const std::string &s1, const std::string &s2)
{
	std::string line;
	
	while (std::getline(inFile, line))
	{
		replace_in_string(line, s1, s2);
		outFile << line << std::endl;
	}
}

int	open_files(const std::string &name_inFile, const std::string &name_outFile, std::ifstream &inFile, std::ofstream &outFile)
{
	inFile.open(name_inFile.c_str());
	outFile.open(name_outFile.c_str());
	if (!inFile || !outFile)
	{
		std::cout << "Error in opening the file" << std::endl;
		return (1);
	}
	return (0);
}

int main(int c, char **v)
{
	if (c != 4)
	{
		std::cout << "Error: The number of arguements is not correct" << std::endl;
		return (1);
	}

	std::ifstream inFile;
	std::ofstream outFile;
	std::string name_inFile;
	std::string name_outFile;

	name_inFile = v[1];
	name_outFile = name_inFile + ".replace";
	if (open_files(name_inFile, name_outFile, inFile, outFile))
		return (1);
	read_files(inFile, outFile, v[2], v[3]);
	inFile.close();
	outFile.close();
	return (0);
}