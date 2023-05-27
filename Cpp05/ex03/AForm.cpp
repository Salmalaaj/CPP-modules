/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:01:25 by slaajour          #+#    #+#             */
/*   Updated: 2023/05/24 22:01:26 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("default"), Signed(false), GradeSign(150), GradeExec(150) {}

AForm::AForm(std::string const name, int GradeToSign, int GradeToExec) : Name(name), Signed(false), GradeSign(GradeToSign), GradeExec(GradeToExec)
{
    if (GradeToSign < 1 || GradeToExec < 1)
        throw AForm::GradeTooHighException();
    else if (GradeToSign > 150 || GradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cpy) : Name(cpy.Name), Signed(cpy.Signed), GradeSign(cpy.GradeSign), GradeExec(cpy.GradeExec) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &cpy)
{
    if (this != &cpy)
        this->Signed = cpy.Signed;
    return *this;
}   

const std::string AForm::getName() const
{
    return this->Name;
}

bool AForm::getSigned() const
{
    return this->Signed;
}

int AForm::getGradeToSign() const
{
    return this->GradeSign;
}

int AForm::getGradeToExecute() const
{
    return this->GradeExec;
}

void AForm::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->GradeSign)
        throw AForm::GradeTooLowException();
    else if (this->Signed == true)
        throw AForm::FormAlreadySignedException();
    else
        this->Signed = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    return out;
}
