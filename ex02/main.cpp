/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 14:28:15 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat	b1("mehdi", 4);
		PresidentialPardonForm	f1("G20");

		Bureaucrat	b2("mike", 140);
		RobotomyRequestForm	f2("F20");

		f1.beSigned(b1);
		f1.execute(b1);

		std::cout << std::endl;

		b2.signAForm(f2);
		b2.executeForm(f2);
	}
	catch (std::exception const& e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;	
	}
}
