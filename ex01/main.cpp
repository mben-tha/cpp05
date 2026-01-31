/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/30 23:23:17 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat	b1("mehdi", 20);
		Form		G20("Doc", 5, 8);
		
		b1.signForm(G20);
		std::cout << G20;
	}
	catch (std::exception const& e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;	
	}
}