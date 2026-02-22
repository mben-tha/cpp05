/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:48:11 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 12:44:56 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int sign_grade, int execute_grade) : m_name(name), m_is_signed(false), m_sign_grade(sign_grade), m_execute_grade(execute_grade)
{
	if (m_sign_grade < 1 || m_execute_grade < 1)
		throw GradeTooHighException();
	else if (m_sign_grade > 150 || m_execute_grade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const& copy) : m_name(copy.getName()), m_sign_grade(copy.getSignGrade()), m_execute_grade(copy.getExecGrade())
{
	m_is_signed = copy.m_is_signed;
}

Form::~Form() {}

Form& Form::operator=(Form const& copy)
{
	if (this != &copy)
	{
		m_is_signed = copy.m_is_signed;
	}
	return (*this);
}

std::string const&	Form::getName() const
{
	return (m_name);
}

bool	Form::getIsSigned() const
{
	return (m_is_signed);
}

int	Form::getSignGrade() const
{
	return (m_sign_grade);
}

int	Form::getExecGrade() const
{
	return (m_execute_grade);
}

std::ostream& operator<<(std::ostream &flow, Form const& form)
{
	std::string sign;

	if (form.getIsSigned())
		sign = " is signed";
	else
		sign = " is not signed";

	flow << form.getName() << sign;
	flow << " (grade for signed : " << form.getSignGrade();
	flow << ") (grade for execute : " << form.getExecGrade() << ")";

	return (flow);
}

void	Form::beSigned(Bureaucrat const& b)
{
	if (not m_is_signed)
	{
		if (m_sign_grade < b.getGrade())
			throw GradeTooLowException();
		else
			m_is_signed = true;
	}
}
