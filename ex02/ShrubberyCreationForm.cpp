/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:02:59 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 18:17:52 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string name, int sign_grade, int execute_grade)
 : AForm(name, sign_grade, execute_grade), m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
 : AForm(copy), m_target(copy.m_target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		m_target = copy.m_target;
	}
	return (*this);
}

void	ShrubberyCreationForm::executeF()
{
	
}
