/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 12:20:19 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat b1("mehdi", 1);
		Bureaucrat b2(b1);

		b2.decrementGrade();
		
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		b1.incrementGrade();
	}
	catch (std::exception const& e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;	
	}
}