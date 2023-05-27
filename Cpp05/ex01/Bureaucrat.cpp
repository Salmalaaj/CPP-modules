/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:29:05 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 02:20:35 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void Bureaucrat::signForm(Form &Form)
{
    try
    {
        Form.beSigned(*this);
        std::cout << this->Name << " signed " << Form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->Name << " couldn't sign " << Form.getName() << " because " << e.what() << std::endl;
    }
}

/* this refers to the current instance of the Bureaucrat object,
which is the object on which the signForm() function is being called.
So, *this is the current Bureaucrat object itself.*/