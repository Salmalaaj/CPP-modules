/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:01:15 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 02:58:11 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        std::string const Name;
        bool Signed;
        int const GradeSign;
        int const GradeExec;
    public:
        AForm();
        AForm(std::string const name, int GradeToSign, int GradeToExec);
        AForm(const AForm &cpy);
        ~AForm();
        AForm &operator=(const AForm &cpy);
        
        // Getters of the attributes
        const std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        // Nested classes (they have access to the private attributes of the class)
        class GradeTooHighException;
        class GradeTooLowException;
        class FormNotSignedException;
        class FormAlreadySignedException;

        void beSigned(Bureaucrat &bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
        
};

class AForm::GradeTooHighException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("grade too high");
        }
};

class AForm::GradeTooLowException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("grade too low");
        }
};

class AForm::FormNotSignedException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("form not signed");
        }
};

class AForm::FormAlreadySignedException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("form already signed");
        }
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
