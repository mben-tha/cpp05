/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 12:28:45 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/01 19:40:22 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
 : AForm("RobotomyRequestForm", 72, 45), m_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
 : AForm(copy), m_target(copy.m_target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		m_target = copy.m_target;
	}
	return (*this);
}

void	RobotomyRequestForm::executeF() const
{
	std::cout << "* brrrKhRRRRSsssssssss *" << std::endl;

	int	nb = rand();
	nb %= 2;
	if (nb)
		std::cout << m_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}
