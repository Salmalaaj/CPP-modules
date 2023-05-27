/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:05 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 22:31:58 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : Name("default")
{
    this->Grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : Name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : Name(cpy.Name), Grade(cpy.Grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
    if (this != &cpy)
        this->Grade = cpy.Grade;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->Grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->Grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->Grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade is: " << obj.getGrade() << std::endl;
    return out;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->Name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->Name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
} 

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->Name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->Name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}