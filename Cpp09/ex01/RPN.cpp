/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:39:59 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/24 11:29:43 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
    if (this != &copy)
    {
        this->myStack = copy.myStack;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::calculator(std::string expression)
{
    std::string numberChars = "0123456789";
    std::string operatorChars = "*/+-";

    for (size_t i = 0; i < expression.length(); i++)
    {
        char currentChar = expression[i];

        if (currentChar == ' ')
            continue;

        if (numberChars.find(currentChar) != std::string::npos)
        {
            int number = currentChar - '0';
            myStack.push(number);
        }
        else if (operatorChars.find(currentChar) != std::string::npos)
        {
            if (myStack.size() < 2)
            {
                std::cout << "Error: Insufficient numbers in stack." << std::endl;
                return;
            }

            int operand2 = myStack.top();
            myStack.pop();
            int operand1 = myStack.top();
            myStack.pop();

            int result = 0;
            switch (currentChar)
            {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0)
                    {
                        std::cout << "Error: Division by zero is not allowed." << std::endl;
                        return;
                    }
                    result = operand1 / operand2;
                    break;
                default:
                    std::cout << "Error: Invalid character encountered." << std::endl;
                    return;
            }

            myStack.push(result);
        }
        else
        {
            std::cout << "Error: Invalid character encountered." << std::endl;
            return;
        }
    }

    if (myStack.size() != 1)
        std::cout << "Error: Invalid expression." << std::endl;
    else
        std::cout << myStack.top() << std::endl;
}