/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:25:39 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 12:59:10 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat	b1("mehdi", 20);
		AForm		G20("Doc", 5, 8);
		
		b1.signAForm(G20);
		std::cout << G20;
	}
	catch (std::exception const& e)
	{
		std::cerr << "ERROR : " << e.what() << std::endl;	
	}
}