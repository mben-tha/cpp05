/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:48:42 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/23 16:13:50 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(Intern const& copy)
{
	(void)copy;
}

Intern::~Intern() {}

Intern& Intern::operator=(Intern const& copy)
{
	(void)copy;
	return *this;
}

AForm* Intern::CreateShrubberyForm(std::string target) const
{
	AForm* f = new ShrubberyCreationForm(target);
	return (f);
}

AForm* Intern::CreateRobotomyForm(std::string target) const
{
	AForm* f = new RobotomyRequestForm(target);
	return (f);
}

AForm* Intern::CreatePresidentialForm(std::string target) const
{
	AForm* f = new PresidentialPardonForm(target);
	return (f);
}

AForm* Intern::makeForm(std::string formName, std::string target) const
{
	std::string	lv[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	typedef AForm* (Intern::*InternFunc)(std::string target) const;
	InternFunc func[] = {&Intern::CreateRobotomyForm, &Intern::CreateShrubberyForm ,&Intern::CreatePresidentialForm};
	
	AForm *f;
	
	for (int i = 0; i < 3; i++)
	{
		if (formName == lv[i])
		{ 
			f = (this->*func[i])(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
			return f;
		}
	}
	throw nonExistentForm();
}
