/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:03:13 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/25 17:25:27 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    vrFx = false;
int     tmp;

PmergeMe::PmergeMe(int argumentCount, char** arguments)
{
    checkInputValidity(argumentCount, arguments);
    implementation(argumentCount, arguments);
    
}

PmergeMe::~PmergeMe()
{
    
}

PmergeMe::PmergeMe(const PmergeMe& src)
{
    *this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& src)
{
    (void)src;
    return (*this);
}

void PmergeMe::checkInputValidity(int argumentCount, char** arguments)
{
    if (argumentCount < 2) {
        std::cout << "Error: Insufficient arguments." << std::endl;
        exit(2);
    }
    else if (argumentCount == 2) {
        std::cout << "Error: Cannot sort a single element." << std::endl;
        exit(2);
    }
    
    std::string validCharacters = "1234567890";
    
    for (int i = 1; i < argumentCount; i++) {
        for (int j = 0; arguments[i][j] != '\0'; j++) {
            size_t result = validCharacters.find(arguments[i][j]);
            if (result == std::string::npos) {
                std::cout << "Error: Invalid input or negative value." << std::endl;
                exit(2);
            }
        }
    }
}

void    PmergeMe::implementation(int argumentCount, char** arguments)
{
    std::cout << "Before sorting: ";
    int i = 1;
    while (i < argumentCount) {
        std::cout << arguments[i] << " ";
        i++;
    }
    
    if ((argumentCount - 1) % 2 != 0)
    {
        vrFx = true;
        tmp = atoi(arguments[argumentCount - 1]);
        if (tmp < 0) {
            std::cout << "Error: Invalid input or negative value." << std::endl;
            exit(2);
        }
        argumentCount--;
    }
    
    std::vector<std::pair<int, int> > vec;
    
    for (int i = 1; i < argumentCount; i += 2) {
        vec.push_back(std::make_pair(atoi(arguments[i]), atoi(arguments[i + 1])));
    }

    sortVector(vec);
    
    std::deque<std::pair<int, int> > deq;
    for (int i = 1; i < argumentCount; i += 2) {
        deq.push_back(std::make_pair(atoi(arguments[i]), atoi(arguments[i + 1])));
    }

    sortDeque(deq);
}

void    PmergeMe::sortVector(std::vector<std::pair<int, int> > inputVector)
{
    std::vector<int> tmpVector1, tmpVector2;
    struct timeval startTime, endTime;
    long    seconds, microseconds;

    gettimeofday(&startTime, NULL);
    for (size_t i = 0; i < inputVector.size(); i++)
    {
        if (inputVector[i].first > inputVector[i].second)
            std::swap(inputVector[i].first, inputVector[i].second);
    }
    
    for (size_t i = 0; i < inputVector.size(); i++)
        tmpVector1.insert(std::upper_bound(tmpVector1.begin(), tmpVector1.end(), inputVector[i].first), inputVector[i].first);
    
    for (size_t i = 0; i < inputVector.size(); i++)
        tmpVector2.push_back(inputVector[i].second);
    
    for (size_t i = 0; i < inputVector.size(); i++)
        tmpVector1.insert(std::upper_bound(tmpVector1.begin(), tmpVector1.end(), tmpVector2[i]), tmpVector2[i]);
    
    if (vrFx == true)
        tmpVector1.insert(std::upper_bound(tmpVector1.begin(), tmpVector1.end(), tmp), tmp);
    gettimeofday(&endTime, NULL);
    std::cout << std::endl << "After sorting: ";
    for (size_t i = 0; i < tmpVector1.size(); i++)
        std::cout << tmpVector1[i] << " ";
    std::cout << std::endl;
    
    seconds = endTime.tv_sec - startTime.tv_sec;
    microseconds = endTime.tv_usec - startTime.tv_usec;
    long totalTime = (seconds / 1000000) + (microseconds);;

    std::cout << std::endl << "Time to process a range of " << tmpVector1.size() << " elements with std::vector: " << totalTime << "us.";
}

void    PmergeMe::sortDeque(std::deque<std::pair<int, int> > inputDeque)
{
    std::deque<int> tmpDeque1, tmpDeque2;
    struct timeval startTime, endTime;
    long    seconds, microseconds;

    gettimeofday(&startTime, NULL);
    for (size_t i = 0; i < inputDeque.size(); i++)
    {
        if (inputDeque[i].first > inputDeque[i].second)
            std::swap(inputDeque[i].first, inputDeque[i].second);
    }
    
    for (size_t i = 0; i < inputDeque.size(); i++)
        tmpDeque1.insert(std::upper_bound(tmpDeque1.begin(), tmpDeque1.end(), inputDeque[i].first), inputDeque[i].first);
    
    for (size_t i = 0; i < inputDeque.size(); i++)
        tmpDeque2.push_back(inputDeque[i].second);
    
    for (size_t i = 0; i < inputDeque.size(); i++)
        tmpDeque1.insert(std::upper_bound(tmpDeque1.begin(), tmpDeque1.end(), tmpDeque2[i]), tmpDeque2[i]);
    
    if (vrFx == true)
        tmpDeque1.insert(std::upper_bound(tmpDeque1.begin(), tmpDeque1.end(), tmp), tmp);
    gettimeofday(&endTime, NULL);
    
    seconds = endTime.tv_sec - startTime.tv_sec;
    microseconds = endTime.tv_usec - startTime.tv_usec;
    long totalTime = (seconds / 1000000) + (microseconds);;

    std::cout << std::endl << "Time to process a range of " << tmpDeque1.size() << " elements with std::deque: " << totalTime << "us." << std::endl;
}