/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:38:43 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/25 17:24:23 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cstring>
#include <sys/time.h>

class PmergeMe
{
    public:
        PmergeMe(int argumentCount, char** arguments);
        PmergeMe(const PmergeMe& src);
        PmergeMe& operator=(const PmergeMe& src);
        ~PmergeMe();
        void    checkInputValidity(int argumentCount, char** arguments);
        void    implementation(int argumentCount, char** arguments);
        void    sortVector(std::vector<std::pair<int, int> > inputVector);
        void    sortDeque(std::deque<std::pair<int, int> > inputDeque);
};


#endif
