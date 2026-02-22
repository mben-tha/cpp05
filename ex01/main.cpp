/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 12:53:27 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat	b1("mehdi", 5);
		Form		G20("g20", 5, 8);
		
		G20.beSigned(b1);
		b1.signForm(G20);
		std::cout << G20;
	}
	catch (std::exception const& e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;	
	}
}