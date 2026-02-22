/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/01 21:01:19 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat	b1("mehdi", 45);
		RobotomyRequestForm	test("G20");
		
		test.beSigned(b1);
		b1.executeForm(test);
	}
	catch (std::exception const& e)
	{
		std::cerr << e.what() << std::endl;	
	}
}
