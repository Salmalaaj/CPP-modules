/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:01:15 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 02:09:20 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        std::string const Name;
        bool Signed;
        int const GradeSign;
        int const GradeExec;
    public:
        Form();
        Form(std::string const name, int GradeToSign, int GradeToExec);
        Form(const Form &cpy);
        ~Form();
        Form &operator=(const Form &cpy);
        
        // Getters of the attributes
        const std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        // Nested classes (they have access to the private attributes of the class)
        class GradeTooHighException;
        class GradeTooLowException;
        class FormAlreadySignedException;

        void beSigned(Bureaucrat &bur);
};

class Form::GradeTooHighException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("grade too high");
        }
};

class Form::GradeTooLowException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("grade too low");
        }
};

class Form::FormAlreadySignedException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Form already signed");
        }
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
