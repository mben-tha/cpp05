/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:48:11 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/30 23:18:32 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int sign_grade, int execute_grade) : m_name(name), m_is_signed(false), m_sign_grade(sign_grade), m_execute_grade(execute_grade)
{
	if (m_sign_grade < 1 || m_execute_grade < 1)
		throw GradeTooHighException();
	else if (m_sign_grade > 150 || m_execute_grade > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const& copy) : m_name(copy.getName()), m_sign_grade(copy.getSignGrade()), m_execute_grade(copy.getExecGrade())
{
	m_is_signed = copy.m_is_signed;
}

AForm::~AForm() {}

AForm& AForm::operator=(AForm const& copy)
{
	if (this != &copy)
	{
		m_is_signed = copy.m_is_signed;
	}
	return (*this);
}

std::string const&	AForm::getName() const
{
	return (m_name);
}

bool	AForm::getIsSigned() const
{
	return (m_is_signed);
}

int	AForm::getSignGrade() const
{
	return (m_sign_grade);
}

int	AForm::getExecGrade() const
{
	return (m_execute_grade);
}

std::ostream& operator<<(std::ostream &flow, AForm const& aForm)
{
	std::string sign;

	if (aForm.getIsSigned())
		sign = " is signed";
	else
		sign = " is not signed";

	flow << aForm.getName() << sign;
	flow << " (grade for signed : " << aForm.getSignGrade();
	flow << ") (grade for execute : " << aForm.getExecGrade() << ")";

	return (flow);
}

void	AForm::beSigned(Bureaucrat const& b)
{
	if (not m_is_signed)
	{
		if (m_sign_grade < b.getGrade())
			throw GradeTooLowException();
		else
			m_is_signed = true;
	}
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (not m_is_signed)
		throw FormNotSigned();
	if (executor.getGrade() > m_execute_grade)
		throw GradeTooLowException();
	executeF();
}
