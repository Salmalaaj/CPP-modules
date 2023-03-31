/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:27:26 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/31 05:37:38 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Something is wrong with arguments" << std::endl;
        return 1;
    }
    
    std::string inFilename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1  is empty" << std::endl;
        return (1);
    }
    
    std::ifstream infile(inFilename);
    if (!infile)
    {
        std::cerr << "Error: could not open file " << inFilename << std::endl;
        return 1;
    }
    
    std::string ouFilename = inFilename + ".replace";
    std::ofstream outfile(ouFilename);
    if (!outfile)
    {
        std::cerr << "Error: could not open file " << ouFilename << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = line.find(s1);
        while (pos != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos = line.find(s1, pos + s2.length());
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}