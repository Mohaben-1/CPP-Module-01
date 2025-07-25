/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 19:46:26 by mohaben-          #+#    #+#             */
/*   Updated: 2025/07/25 21:37:33 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
		return (1);
	}
	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	std::ifstream	inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
		return (1);
	}
	std::string		outfile_name = filename + ".replace";
	std::ofstream	outFile(outfile_name.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Could not open file '" << outfile_name << "'" << std::endl;
		return (1);
	}
	std::string		line;
	while (std::getline(inFile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}
