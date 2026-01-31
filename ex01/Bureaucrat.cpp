/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:54:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/30 23:24:11 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		m_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) : m_name(copy.getName())
{
	m_grade = copy.m_grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
	if (this != &copy)
	{
		m_grade = copy.m_grade;
	}
	return (*this);
}

std::string const&	Bureaucrat::getName() const
{
	return (m_name);
}

int	Bureaucrat::getGrade() const
{
	return (m_grade);
}

std::ostream& operator<<(std::ostream &flow, Bureaucrat const& bureaucrat)
{
	flow << bureaucrat.getName();
	flow << ", bureaucrat grade ";
	flow << bureaucrat.getGrade();
	flow << ".";

	return (flow);
}

void	Bureaucrat::incrementGrade()
{
	if (m_grade - 1 < 1)
		throw GradeTooHighException();
	else
		m_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (m_grade + 1 > 150)
		throw GradeTooLowException();
	else
		m_grade++;
}

void	Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << m_name << " couldn’t sign " << f.getName()
		<< " because " << e.what() << std::endl;
	}
}
