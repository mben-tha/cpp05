/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:44:18 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/01 19:46:11 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
 : AForm("PresidentialPardonForm", 25, 5), m_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
 : AForm(copy), m_target(copy.m_target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		m_target = copy.m_target;
	}
	return (*this);
}

void	PresidentialPardonForm::executeF() const
{
	std::cout << m_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
