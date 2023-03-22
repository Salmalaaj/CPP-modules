/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:01:25 by slaajour          #+#    #+#             */
/*   Updated: 2023/03/22 07:01:26 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>
// using namespace std;

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                std::cout << argv[i][j];
                j++;
            }
            i++;
            if (argv[i])
                std::cout << " ";
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return 0;
}
