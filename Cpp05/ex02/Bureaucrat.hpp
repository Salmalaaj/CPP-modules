/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:00 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 22:31:47 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <exception>

# include "AForm.hpp"

class Bureaucrat{
    private:
        std::string const Name;
        int Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &cpy);
        
        // Getters of the attributes
        const std::string getName() const;
        int getGrade() const;

        // Nested classes (they have access to the private attributes of the class)
        class GradeTooHighException;
        class GradeTooLowException;

        //increment and decrement grade
        void incrementGrade();
        void decrementGrade();

        void signForm(class AForm &form);
        void executeForm(class AForm const &form);
        
};

/* GradeTooHighException inherits
 from the standard exception class provided by
 the C++ Standard Library */
 
class Bureaucrat::GradeTooHighException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Grade too high");
        }
};

/* The what() function is a virtual member
function defined in std::exceptionthat returns a
C-style string (const char*) describing the exception.*/

class Bureaucrat::GradeTooLowException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Grade too low");
        }
};

/* The throw() specifier specifies that this
function does not throw any exceptions. */

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif