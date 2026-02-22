/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:02:59 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/22 14:10:42 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
 : AForm("ShrubberyCreationForm", 145, 137), m_target(target) {}

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

void	ShrubberyCreationForm::executeF() const
{
	std::string	file_name = m_target + "_shrubbery";
	std::ofstream	new_file(file_name.c_str());
	if (not new_file)
		throw FormCannotExecute();

	new_file << "    /\\" << '\n';
	new_file << "   /**\\" << '\n';
	new_file << "  /*  *\\" << '\n';
	new_file << " /*    *\\" << '\n';
	new_file << "/*      *\\" << '\n';
	new_file << "    ||" << '\n';
	new_file << "\n\n\n";

	new_file << "    /\\" << '\n';
	new_file << "   /**\\" << '\n';
	new_file << "  /*  *\\" << '\n';
	new_file << " /*    *\\" << '\n';
	new_file << "/*      *\\" << '\n';
	new_file << "    ||" << '\n';
	new_file << "\n\n\n";

	new_file << "    /\\" << '\n';
	new_file << "   /**\\" << '\n';
	new_file << "  /*  *\\" << '\n';
	new_file << " /*    *\\" << '\n';
	new_file << "/*      *\\" << '\n';
	new_file << "    ||" << '\n';
	new_file << "\n\n\n";

	new_file << "    /\\" << '\n';
	new_file << "   /**\\" << '\n';
	new_file << "  /*  *\\" << '\n';
	new_file << " /*    *\\" << '\n';
	new_file << "/*      *\\" << '\n';
	new_file << "    ||" << '\n';
	new_file << "\n\n\n";
}
