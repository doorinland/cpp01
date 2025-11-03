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

void	read_files(std::ifstream &inFile, std::ofstream &outFile, std::string s1, std::string s2)
{
	std::string line;
	std::string result;
	size_t pos = 0;
	
	while (std::getline(inFile, line))
	{
		result.clear();
		pos = 0;
		
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			// STEP 1: Add everything BEFORE the found s1 to result
			result += line.substr(0, pos);
			// STEP 2: Add the replacement string s2
			result += s2;
			// STEP 3: Remove the processed part (including s1) from line
			line = line.substr(pos + s1.length());
			pos = 0;
		}
		result += line;
		outFile << result << std::endl;
	}
}

int	open_files(std::string name_inFile, std::string name_outFile, std::ifstream &inFile, std::ofstream &outFile)
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