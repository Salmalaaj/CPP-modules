/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:01:25 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/26 02:11:33 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("default"), Signed(false), GradeSign(150), GradeExec(150) {}

Form::Form(std::string const name, int GradeToSign, int GradeToExec) : Name(name), Signed(false), GradeSign(GradeToSign), GradeExec(GradeToExec)
{
    if (GradeToSign < 1 || GradeToExec < 1)
        throw Form::GradeTooHighException();
    else if (GradeToSign > 150 || GradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &cpy) : Name(cpy.Name), Signed(cpy.Signed), GradeSign(cpy.GradeSign), GradeExec(cpy.GradeExec) {}

Form::~Form() {}

Form &Form::operator=(const Form &cpy)
{
    if (this != &cpy)
        this->Signed = cpy.Signed;
    return *this;
}

const std::string Form::getName() const
{
    return this->Name;
}

bool Form::getSigned() const
{
    return this->Signed;
}

int Form::getGradeToSign() const
{
    return this->GradeSign;
}

int Form::getGradeToExecute() const
{
    return this->GradeExec;
}

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->GradeSign)
    {
        std::cout << bur.getGrade() << this->GradeSign << std::endl;
        throw Form::GradeTooLowException();
    }
    else if (this->Signed == true)
        throw Form::FormAlreadySignedException();
    else
        this->Signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

